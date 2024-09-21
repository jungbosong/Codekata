#include <iostream>

using namespace std;

#define MAX 100001

int prefix_sum[MAX] = {0};      // 누적합 저장

int main() 
{
    // 입력 시간 단축
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;      // 온도를 측정한 전체 날짜 수 (2 <= N <= 100,000)
    int k;      // 합을 구하기 위한 연속적인 날짜 수 (1 < K < N)
    int temperature;    // 온도
    int max = -10000000;
    
    // 입력
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        cin >> temperature;

        prefix_sum[i] = prefix_sum[i-1] + temperature;
    }

    // 최대값 구하기
    for(int i = k; i  <= n; i++)
    {
        if(max < prefix_sum[i] - prefix_sum[i-k])
        {
            max = prefix_sum[i] - prefix_sum[i-k];
        }
    }

    // 출력
    cout << max;

    return 0;
}
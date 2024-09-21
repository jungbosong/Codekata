#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;                   // 테스트 케이스 수
    int n;                    // 보유한 의상 수
    long long result = 1;           // 경우의 수
    map<string, int> clothes; // 보유한 의상 정보
    string name, type;        // 의상 이름, 종류

    cin >> tc;

    for(int i = 0; i < tc; i++)
    {
        // 초기화
        result = 1;
        clothes.clear();

        // 의상정보 저장
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            cin >> name >> type;
            if(clothes.find(type) != clothes.end())
            {
                clothes[type]++;
            }
            else
            {
                clothes.insert({type, 1});
            }
        }

        // 결과 출력
        for(auto c: clothes)
        {
            result *= (c.second + 1);
        }

        cout << result-1 << '\n';        
    }

    return 0;
}
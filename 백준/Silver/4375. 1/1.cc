#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    while(scanf("%d", &n) != EOF)
    {
        ll cnt = 1, ret = 1;
        while(true)
        {
            if(cnt % n == 0)
            {
                cout << ret << '\n';
                break;
            }
            else
            {
                cnt = (cnt * 10 + 1) % n;
                ret++;
            }
        }
    }
    return 0;
}
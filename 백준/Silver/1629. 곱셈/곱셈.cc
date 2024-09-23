#include <iostream>

using namespace std;
typedef long long ll;

ll a, b, c;

ll POW(ll a, ll b)
{
    if(b == 1)
    {
        return a % c;
    }
    ll ret = POW(a, b / 2);
    ret = (ret * ret) % c;
    if(b % 2) 
    {
        ret = (ret * a) % c;
    }
    return ret;
}

int main()
{
    cin >> a >> b >> c;

    cout << POW(a, b);

    return 0;
}
#include <iostream>

using namespace std;

int n;
long long b[90];

int main()
{
    cin >> n;

    b[0] = 1;
    b[1] = 1;
    for(int i = 2; i < n; i++)
    {
        b[i] = b[i-2] + b[i-1];
    }

    cout << b[n-1];

    return 0;
}
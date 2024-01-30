#include <bits/stdc++.h>
using namespace std;

int GetLCM(int a, int b)
{
	for (int lcm = 1; lcm <= a * b; lcm++)
	{
		if (lcm % a == 0 && lcm % b == 0)
		{
			return lcm;
		}
	}
}

int GetGCM(int a, int b)
{
	if (b < a)
	{
		int tmp = b;
		b = a;
		a = tmp;
	}
	for (int gcm = a; gcm > 0; gcm--)
	{
		if (a % gcm == 0 && b % gcm == 0)
		{
			return gcm;
		}
	}
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << GetGCM(a, b) << "\n" << GetLCM(a, b);
}

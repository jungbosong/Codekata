#include <bits/stdc++.h>
using namespace std;

int GetGCD(int a, int b)
{
	int tmp, n;
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}

	while (a % b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}

	return b;
}

int GetLCM(int a, int b)
{
	return a * b / GetGCD(a, b);
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << GetGCD(a, b) << "\n" << GetLCM(a, b);
}

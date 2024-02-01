#include <bits/stdc++.h>
using namespace std;

int GetGinomialCoefficient(int n, int k)
{
	int dividedNum = 1;
	int divider = 1;

	for (int i = n; i > n - k; i--)
	{
		dividedNum *= i;
	}
	for (int i = k; i > 0; i--)
	{
		divider *= i;
	}

	return dividedNum / divider;
}

int main()
{
	int n, k;

	cin >> n >> k;

	cout << GetGinomialCoefficient(n, k);
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	int input[10001] = { 0 };
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		input[num] += 1;
	}

	for (int i = 1; i < 10001; i++)
	{
		for (int j = 0; j < input[i]; j++)
		{
			cout << i << '\n';
		}
	}
}
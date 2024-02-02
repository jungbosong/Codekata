#include <bits/stdc++.h>
using namespace std;

#define SIZE 100001

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	int arr[SIZE];
	int sum_arr[SIZE] = { 0 };

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		sum_arr[i] = sum_arr[i - 1] + arr[i];
	}

	int start, end;
	for (int i = 0; i < m; i++)
	{
		cin >> start >> end;
		cout << sum_arr[end] - sum_arr[start - 1] << '\n';
	}
}
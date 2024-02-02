#include <bits/stdc++.h>
using namespace std;

#define SIZE 1025

int n, m;
int arr[SIZE][SIZE];
int sum_arr[SIZE][SIZE] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	
	for (int x = 1; x <= n; x++)
	{
		for (int y = 1; y <= n; y++)
		{
			cin >> arr[x][y];
			sum_arr[x][y] = sum_arr[x][y-1] + sum_arr[x-1][y] - sum_arr[x-1][y-1] + arr[x][y];
		}
	}

	int sx, sy, ex, ey;
	for (int i = 0; i < m; i++)
	{
		cin >> sx >> sy >> ex >> ey;
		cout << sum_arr[ex][ey] - sum_arr[sx-1][ey] - sum_arr[ex][sy-1] + sum_arr[sx - 1][sy - 1] << '\n';
	}
}
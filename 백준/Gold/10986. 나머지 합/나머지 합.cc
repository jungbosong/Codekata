#include <bits/stdc++.h>
using namespace std;

#define SIZE 1000001
#define MAX_M 1000

long sum_input[SIZE] = { 0 };
long cnt_same[MAX_M] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m;
	long answer = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		int input;
		cin >> input;
		sum_input[i] = sum_input[i - 1] + input;
	}

	for (int i = 1; i <= n; i++)
	{
		int remainder = sum_input[i] % m;
		if (remainder == 0)
		{
			answer++;
		}
		cnt_same[remainder]++;
	}

	for (int i = 0; i < m; i++)
	{
		if(cnt_same[i] >1)
		{
			answer += cnt_same[i] * (cnt_same[i] - 1) / 2; 
		}
	}
	cout << answer;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int answer = 1;
	int sum = 1;
	int startIdx = 1, endIdx = 1;

	while (endIdx != n)
	{
		if (sum > n)
		{
			sum -= startIdx++;
		}
		else if (sum < n)
		{
			sum += ++endIdx;
		}
		else
		{
			sum += ++endIdx;
			answer++;
		}
	}
	
	cout << answer;
}
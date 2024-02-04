#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> numbers;
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		numbers.push_back(num);
	}
	sort(numbers.begin(), numbers.end());

	int answer = 0;
	int startIdx = 0, endIdx = n - 1;
	int sum = numbers[startIdx] + numbers[endIdx];
	while (startIdx != endIdx)
	{
		if (sum > m)
		{
			sum = numbers[startIdx] + numbers[--endIdx];
		}
		else if (sum < m)
		{
			sum = numbers[++startIdx] + numbers[endIdx];
		}
		else
		{
			sum = numbers[++startIdx] + numbers[endIdx];
			answer++;
		}
	}
	cout << answer;
}
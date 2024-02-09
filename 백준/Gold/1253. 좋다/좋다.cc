#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	vector<int> numbers;
	int num;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		numbers.push_back(num);
	}
	sort(numbers.begin(), numbers.end());

	int answer = 0;
	
	for(int checkIdx = 0; checkIdx < n; checkIdx++)
	{
		int startIdx = 0;
		int endIdx = n-1;
		long find = numbers[checkIdx];
		while (startIdx < endIdx)
		{
			if (numbers[startIdx] + numbers[endIdx] == find)
			{
				if (startIdx != checkIdx && endIdx != checkIdx)
				{
					answer++;
					break;
				}
				else if (startIdx == checkIdx)
				{
					startIdx++;
				}
				else if (endIdx == checkIdx)
				{
					endIdx--;
				}
			}
			else if (numbers[startIdx] + numbers[endIdx] > find)
			{
				endIdx--;
			}
			else if (numbers[startIdx] + numbers[endIdx] < find)
			{
				startIdx++;
			}
		}
	}
	cout << answer;
}
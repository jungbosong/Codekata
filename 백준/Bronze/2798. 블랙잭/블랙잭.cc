#include <bits/stdc++.h>
using namespace std;

int GetBlackJackResult(int n, int m, int* openedCardNums)
{
	int result = 0;

	for (int first = 0; first < n; first++)
	{
		for (int second = first + 1; second < n; second++)
		{
			for (int third = second + 1; third < n; third++)
			{
				int sum = openedCardNums[first] + openedCardNums[second] + openedCardNums[third];
				if (sum <= m)
				{
					if (result < sum)
					{
						result = sum;
					}
				}
				else if (sum > m)
				{
					continue;
				}
			}
		}
	}

	return result;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;

	int* openedCardNums = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> openedCardNums[i];
	}

	cout << GetBlackJackResult(n, m, openedCardNums);

	delete[] openedCardNums;
}
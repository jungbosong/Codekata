#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int maxScore = 0;
	int sum = 0;
	int score;
	for (int i = 0; i < n; i++)
	{
		cin >> score;
		if (maxScore <= score)
		{
			maxScore = score;
		}
		sum += score;
	}

	cout << (float)sum / maxScore * 100.0 / n;
}
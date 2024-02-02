#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	float maxScore = 0;
	vector<float> scores;
	float score;
	for (int i = 0; i < n; i++)
	{
		cin >> score;
		if (maxScore <= score)
		{
			maxScore = score;
		}
		scores.push_back(score);
	}

	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += scores[i];
	}

	cout << sum / maxScore * 100 / n;
}
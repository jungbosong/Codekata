#include <bits/stdc++.h>
using namespace std;

int condition_ACGT[4];
int count_ACGT[4] = { 0 };
int checkSecret;

void Add(char p)
{
	switch (p)
	{
		case 'A':
			count_ACGT[0]++;
			if (condition_ACGT[0] == count_ACGT[0])
			{
				checkSecret++;
			}
			break;
		case 'C':
			count_ACGT[1]++;
			if (condition_ACGT[1] == count_ACGT[1])
			{
				checkSecret++;
			}
			break;
		case 'G':
			count_ACGT[2]++;
			if (condition_ACGT[2] == count_ACGT[2])
			{
				checkSecret++;
			}
			break;
		case 'T':
			count_ACGT[3]++;
			if (condition_ACGT[3] == count_ACGT[3])
			{
				checkSecret++;
			}
			break;
	}
}

void Remove(char p)
{
	switch (p)
	{
	case 'A':
		if (condition_ACGT[0] == count_ACGT[0])
		{
			checkSecret--;
		}
		count_ACGT[0]--;
		break;
	case 'C':
		if (condition_ACGT[1] == count_ACGT[1])
		{
			checkSecret--;
		}
		count_ACGT[1]--;
		break;
	case 'G':
		if (condition_ACGT[2] == count_ACGT[2])
		{
			checkSecret--;
		}
		count_ACGT[2]--;
		break;
	case 'T':
		if (condition_ACGT[3] == count_ACGT[3])
		{
			checkSecret--;
		}
		count_ACGT[3]--;
		break;
	}
}

int main()
{
	int s_length, p_length;
	cin >> s_length >> p_length;

	string s;
	cin >> s;

	for (int i = 0; i < 4; i++)
	{
		cin >> condition_ACGT[i];
		if (condition_ACGT[i] == 0)
		{
			checkSecret++;
		}
	}

	int answer = 0;
	for (int i = 0; i < p_length; i++)
	{
		Add(s[i]);
	}
	if (checkSecret == 4)
	{
		answer++;
	}

	for (int i = p_length; i < s_length; i++)
	{
		int j = i - p_length;
		Add(s[i]);
		Remove(s[j]);
		if (checkSecret == 4)
		{
			answer++;
		}
	}

	cout << answer;
}
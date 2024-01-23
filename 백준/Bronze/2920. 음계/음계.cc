#include <bits/stdc++.h>
using namespace std;

#define MIXED "mixed"
#define ASCENDING "ascending"
#define DESCENDING "descending"

enum PerformenceType
{
	descending = -1,
	null = 0,
	ascending = 1,
	mixed = 2,
};

int main()
{
	int n, condition;
	bool isAscending = false;
	PerformenceType result = null;

	cin >> n;
	condition = n;

	for (int i = 0; i < 7; i++)
	{
		cin >> n;

		if (condition < n) 
		{
			if (result == descending)
			{
				result = mixed;
				break;
			}
			else
			{
				isAscending = true;
				result = ascending;
			}
		}
		else 
		{
			if (result == ascending)
			{
				result = mixed;
				break;
			}
			else
			{
				isAscending = false;
				result = descending;
			}
		}
		condition = n;
	}

	switch (result)
	{
		case mixed: 
		{
			cout << MIXED;
			break;
		}
		case ascending:
		{
			cout << ASCENDING;
			break;
		}
		case descending:
		{
			cout << DESCENDING;
			break;
		}
	}
}
#include <bits/stdc++.h>
using namespace std;

bool CheckIsPalindromesNumber(string input)
{
	int front = 0;
	int back = input.length() - 1;

	while (back >= 0)
	{
		if (back == input.length() - 1 && input[back] == '0')
		{
			return false;
		}
		if (input[front] != input[back])
		{
			return false;

		}
		front++;
		back--;
	}	
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	while (true)
	{
		string input;
		cin >> input;

		if (input == "0")
		{
			break;
		}
		
		if (CheckIsPalindromesNumber(input))
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
}
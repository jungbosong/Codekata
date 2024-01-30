#include <bits/stdc++.h>
using namespace std;

long long Hashing(int length, string input)
{
	long long sum = 0;
	for (int i = 0; i < length; i++)
	{
		int num = (int)(input.at(i) - 'a') + 1;
		sum += num * pow(31,i);
	}
	return sum;
}

int main()
{
	int length;
	string input;

	cin >> length >> input;
	cout << Hashing(length, input);

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define M 1234567891
#define R 31

unsigned long long Hashing(int length, string input)
{
	unsigned long long sum = 0;

	for (int i = 0; i < length; i++)
	{
		unsigned long long num = input[i] - 'a' + 1;

		for (int j = 0; j < i; j++)
		{
			num *= R;
			num %= M;
		}
		
		sum += num;
		sum %= M;
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

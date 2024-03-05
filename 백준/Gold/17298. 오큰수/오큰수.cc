#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N, 0);
	vector<int> NGE(N, 0);
	stack<int> NGE_index;
	
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	NGE_index.push(0);
	for (int i = 1; i < N; i++)
	{
		while (!NGE_index.empty() && A[i] > A[NGE_index.top()])
		{
			NGE[NGE_index.top()] = A[i];
			NGE_index.pop();
		}
		NGE_index.push(i);
	}

	while (!NGE_index.empty())
	{
		NGE[NGE_index.top()] = -1;
		NGE_index.pop();
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << NGE[i] << ' ';
	}
}
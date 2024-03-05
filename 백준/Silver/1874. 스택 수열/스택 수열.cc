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

	vector<int> arr(N, 0);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	stack<int> s;
	vector<char> answer;
	int num = 1;
	bool isPossible = true;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] >= num) {
			while (arr[i] >= num)
			{
				s.push(num++);
				answer.push_back('+');
			}
			s.pop();
			answer.push_back('-');
		}
		else
		{
			int top = s.top();
			s.pop();
			if (top > arr[i])
			{
				isPossible = false;
				break;
			}
			else
			{
				answer.push_back('-');
			}
		}
	}

	if (isPossible)
	{
		for (int i = 0; i < answer.size(); i++)
		{
			cout << answer[i] << '\n';
		}
	}
	else
	{
		cout << "NO";
	}
}
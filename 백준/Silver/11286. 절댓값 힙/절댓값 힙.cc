#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

struct cmp {
	bool operator() (int a, int b)
	{
		if (abs(a) == abs(b))
		{
			return a > b;
		}
		return abs(a) > abs(b);
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int num;
	priority_queue<int, vector<int>, cmp> pq;

	for (int i = 0; i < N; i++)
	{
		cin >> num;

		if (num == 0)
		{
			if (pq.empty())
			{
				cout << "0\n";
			}
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
		{
			pq.push(num);
		}
	}
}
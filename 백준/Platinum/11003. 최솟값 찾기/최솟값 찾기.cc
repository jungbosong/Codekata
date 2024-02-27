#include <iostream>
#include <deque>
using namespace std;

typedef pair<int,int> Node;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L;
	cin >> N >> L;

	int num;
	deque<Node> mydeque;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		
		while (mydeque.size() && mydeque.back().second > num)
		{
			mydeque.pop_back();
		}

		mydeque.push_back(Node(i, num));

		while (mydeque.size() && mydeque.front().first <= i - L)
		{
			mydeque.pop_front();
		}

		cout << mydeque.front().second << ' ';
	}
}
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int N;
	cin >> N;

	queue<int> cards;
	for (int i = 1; i <= N; i++)
	{
		cards.push(i);
	}
	
	int front;
	while (cards.size() > 1)
	{
		cards.pop();
		front = cards.front();
		cards.pop();
		cards.push(front);
	}

	cout << cards.front();
}
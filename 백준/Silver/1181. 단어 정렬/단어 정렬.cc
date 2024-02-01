#include <bits/stdc++.h>
using namespace std;

struct compare
{
	bool operator()(const string a, const string b) 
	const { 
		return a.length()==b.length() ? a < b : a.length() < b.length();
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<string> inputs;
	string tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		inputs.push_back(tmp);
	}

	set<string, compare> tmpAnswer(inputs.begin(), inputs.end());
	set<string, compare> answer(tmpAnswer.begin(), tmpAnswer.end());

	for (set<string>::iterator it = answer.begin(); it != answer.end(); ++it)
	{
		cout << *it << "\n";
	}
}
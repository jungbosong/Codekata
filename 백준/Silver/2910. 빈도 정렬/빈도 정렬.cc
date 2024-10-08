#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<int, int> position;

bool CheckPosition(const pair<int,int>& a, const pair<int,int>& b)
{
    if(position[a.first] < position[b.first]) return a.first > b.first;
    else return a.first <= b.first;
}

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    if(a.second == b.second) return CheckPosition(a, b);
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, c;
    map<int, int> arr;

    cin >> n >> c;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if(arr.find(num) != arr.end())
        {
            arr[num]++;
        }
        else
        {
            arr.insert({num, 1});
            position.insert({num, i});
        }
    }

    vector<pair<int,int>> sorted_arr (arr.begin(),arr.end());        
    
    stable_sort(sorted_arr.begin(), sorted_arr.end(), cmp);

    for(pair<int, int> result: sorted_arr)
    {
        for(int i = 0; i < result.second; i++)
        {
            cout << result.first << ' ';
        }
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> numbers;
int sum = 0;

void SetNumbers()
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(sum - numbers[i] - numbers[j] == 100)
            {
                numbers.erase(numbers.begin() + i, numbers.begin() + i + 1);
                numbers.erase(numbers.begin() + j, numbers.begin() + j + 1);
                return;
            }   
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;

    for(int i = 0; i < 9; i++)
    {
        cin >> num;
        numbers.push_back(num);
        sum += num;
    }

    SetNumbers();

    sort(numbers.begin(), numbers.end());

    for(int i : numbers)
    {
        cout << i << '\n';
    }

    return 0;
}
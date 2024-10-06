#include <iostream>

using namespace std;

int left_pos, right_pos, sum;

void MoveLeft(int n)
{
    left_pos -= n;
    right_pos -= n;
    sum += n;
}

void MoveRight(int n)
{
    left_pos += n;
    right_pos += n;
    sum+= n;   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, j;

    cin >> n >> m >> j;

    left_pos = 1;
    right_pos = m;
    sum = 0;

    for(int i = 0; i < j; i++)
    {
        int position;
        cin >> position;

        if(position == left_pos || position == right_pos) 
        {
            continue;
        }
        else if(left_pos <= position && position <= right_pos)
        {
            continue;
        }
        else if(position > right_pos)
        {
            MoveRight(position - right_pos);
           
        }
        else if(position < left_pos)
        {
           MoveLeft(left_pos - position);
        }
    }

    cout << sum;

    return 0;
}
#include <iostream>

using namespace std;

int board[64][64];
int n;

bool CheckEqual(int x, int y, int size)
{
    for(int i = x; i < x + size; i++)
    {
        for(int j = y; j < y + size; j++)
        {
            if(board[x][y] != board[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

string QuadTree(int x, int y, int size)
{
    if(CheckEqual(x, y, size)) return to_string(board[x][y]);

    int mSize =  size / 2;
    string result = "(";
    result += QuadTree(x, y, mSize);                   // 1사분면
    result += QuadTree(x, y + mSize, mSize);           // 2사분면
    result += QuadTree(x + mSize, y, mSize);           // 3사분면
    result += QuadTree(x + mSize, y + mSize, mSize);   // 4사분면
    return result + ")";
}

int main()
{
    ios::sync_with_stdio(false);;
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string data;
        cin >> data;
        for(int j = 0; j < n; j++)
        {
            board[i][j] = data[j] - '0';
        }
    }

    cout << QuadTree(0, 0, n);

    return 0;
}
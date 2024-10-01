#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int board[101][101] = {0};
bool visited[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int m, n, k;
vector<int> areas;

int BFS(int x, int y)
{
    int area = 1;
    queue<pair<int,int>> Q;
    Q.push({x, y});
    visited[x][y] = true;

    while(!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        for(int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(0 > nx || nx >= m || 0 > ny || ny >= n) continue;
            if(board[nx][ny] == 1 || visited[nx][ny]) continue;
            visited[nx][ny] = true;
            Q.push({nx, ny});
            area++;
        }
    }

    return area;
}

void DrawSquare(int sx, int sy, int ex, int ey)
{    
    if(sx < 0 || sy < 0 || ex < 0 || ey < 0) return;

    for(int i = sy; i < ey; i++)
    {
        for(int j = sx; j < ex; j++)
        {
            board[i][j] = 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n >> k;

    for(int i = 0; i < k; i++)
    {
        int sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;        
        DrawSquare(sx, sy, ex, ey);   
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {            
            if(board[i][j] == 0 && visited[i][j] == false) 
            {
                areas.push_back(BFS(i, j));
            }
        }
    }

    sort(areas.begin(), areas.end());

    cout << areas.size() << '\n';
    for(int area: areas)
    {
        cout << area << ' ';
    }

    return 0;
}
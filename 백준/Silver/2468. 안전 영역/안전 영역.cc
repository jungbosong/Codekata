#include <iostream>
#include <map>
#include <queue>

using namespace std;

int board[101][101];
bool visited[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n;
map<int, int> height_count;
int max_cnt = 1;
int cnt = 0;

void BFS(int x, int y, int height)
{
    queue<pair<int, int>> Q;

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
            if(0 > nx || nx >= n || 0> ny || ny >= n) continue;
            if(visited[nx][ny] || board[nx][ny] - height <= 0) continue;
            visited[nx][ny] = true;
            Q.push({nx, ny});
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> board[i][j];
            if(height_count.find(board[i][j]) != height_count.end())
            {
                height_count.insert({board[i][j],-1});
            }
            else
            {
                height_count[board[i][j]]++;
            }
        }
    }

    for(pair<int,int> height: height_count){
        cnt = 0;
        fill(&visited[0][0], &visited[n][n], false);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(board[i][j] - height.first > 0 && visited[i][j] == false)
                {
                    BFS(i,j, height.first);
                    cnt++;
                    if(max_cnt <= cnt)
                    {
                        max_cnt = cnt;
                    }
                }
            }
        }
    }

    cout << max_cnt;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
#define MAX 51
int board[MAX][MAX];
bool vis[MAX][MAX];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int w, h, cnt, result;
queue<pair<int,int>> Q;

void BFS(int x, int y)
{    
    vis[x][y] = true;
    Q.push({x,y});
    while(!Q.empty()) {
        pair<int,int> cur = Q.front(); Q.pop();
        for(int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = true;
            Q.push({nx,ny});
        }
    }
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;

    while(tc--)
    {
        cin >> w >> h >> cnt;

        int x,y;
        while(cnt--) {    
            cin >> x >> y;
            board[y][x] = 1;
        }

        result = 0;       
        
        for(int row = 0; row < h; row++) {
            for(int col = 0; col < w; col++) {
                if(board[row][col]==1 && !vis[row][col]) {
                    BFS(row,col);
                    result++;
                }
            }
        }

        cout << result << '\n';

        fill(&board[0][0], &board[w][h], 0);
        fill(&vis[0][0], &vis[w][h], false);
    }

    return 0;
}
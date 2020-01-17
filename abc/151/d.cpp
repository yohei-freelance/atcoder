#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;
const int inff = 1e5;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

void mazing(){
    int h, w; cin >> h >> w;
    char maze[w][h];
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            cin >> maze[i][j];
        }
    }
}

int bfs(int sx, int sy){
    queue<P> que;
    int d[w][h];
    int max_cost = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            d[i][j] = inff;
        }
    }
    que.push((sx,sy));
    d[sx][sy] = 0;
    while(!que.size()){
        P p = que.front();
        que.pop();
        for(int i=0; i<4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
        }
        if (0 <= nx && nx < h && 0 <= ny && ny < w && maze[nx][ny] != '#' && d[nx][ny] == inff){
            que.push(P(nx, ny));
            d[nx][ny] = d[p.first][p.second] + 1;
            max_cost = d[nx][ny];
        }
    }
    return max_cost;
}

/*
int main(){
    int h, w; cin >> h >> w;
    char maze[w][h];
    int ans = 0;
    int tmp_ans = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            cin >> maze[i][j];
        }
    }
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            if(maze[i][j] == '.'){
                queue<P> que;
                int d[w][h];
                for(int k=0; k<w; k++){
                    for(int l=0; l<h; l++){
                        d[k][l] = 100;
                    }
                }
                que.push(P(i,j));
                d[i][j] = 0;
                while(que.size()){
                    P p = que.front();
                    que.pop();
                    for(int k=0; k<4; k++){
                        int nx = p.first + dx[i];
                        int ny = p.second + dy[i];
                        if(0 <= nx && nx < w && ny < h && 0 <= ny && maze[nx][ny] != '#' && d[nx][ny] == 100){
                            que.push(P(nx, ny));
                            d[nx][ny] = d[p.first][p.second] + 1;
                            tmp_ans = d[nx][ny];
                        }
                    }
                }
                ans = max(tmp_ans, ans);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
*/

int main(){
    mazing();
    cout << bfs(0, 0) << endl;
}
// uncomplete

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int h, w; cin >> h >> w;
    char maze[w][h];
    int ans = 0;
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
                        }
                    }
                }
                int tmp_ans = 0;
                for(int k=0; k<w; i++){
                    for(int l=0; l<h; j++){
                        if (d[k][l] != 100){
                            tmp_ans = max(d[k][l], tmp_ans);
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


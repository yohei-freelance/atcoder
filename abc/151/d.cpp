#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;
template<typename T> T factorial(T n){
    if(n==1) return 1;
    else return n*factorial(n-1)%MOD;
}
template<typename T> T Pow(T x, T n, T m){
    if(n == 0) return 1;
    if(n % 2 == 0) return Pow(x * x % m, n / 2, m);
    else return x * Pow(x, n - 1, m) % m;
}
template<typename T> T combination(T n, T k, T m){
    return factorial<T>(n) * Pow<T>(factorial(k), m-2, m) % m * Pow<T>(factorial(n-k), m-2, m) % m;
}
struct edge{
    int to; // 辺の行き先
    int weight; // 辺の重み
    edge(int t, int w) : to(t), weight(w) { }
};
using graph = vector<vector<edge>>;
using Graph = vector<vector<int>>;

int bfs(vector<vector<char>> maze, int h, int w, int sx, int sy){
    queue<P> q;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int d[h][w];
    int ans = 0;
    rep(i, h){
        rep(j, w){
            d[i][j] = inf;
        }
    }
    q.push(P(sx, sy));
    d[sx][sy] = 0;
    while(!q.empty()){
        P p = q.front();
        q.pop();
        rep(i, 4){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(0 <= nx && nx < h && 0 <= ny && ny < w && maze[nx][ny] != '#' && d[nx][ny] == inf){
                q.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
                ans = max(ans, d[nx][ny]);
            }
        }
    }
    return ans;
}

int main(){
    int h, w; cin >> h >> w;
    vector<vector<char>> maze(h, vector<char>(w));
    rep(i, h){
        rep(j, w){
            cin >> maze[i][j];
        }
    }
    int ans = 0;
    rep(sx, h){
        rep(sy, w){
            if(maze[sx][sy] == '.'){
                ans = max(ans, bfs(maze, h, w, sx, sy));
            }
        }
    }
    cout << ans << endl;
    return 0;
}
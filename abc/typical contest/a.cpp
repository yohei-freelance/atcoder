#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;
template<typename T> T factorial(T n){
    if(n==1) return 1;
    else return n*factorial(n-1);
}
template<typename T> T combination(T n, T k){
    vector<vector<T>> v(n+1, vector<T>(n+1, 0)); //dpテーブル
    rep(i, v.size()){
        v[i][0] = 1; v[i][i] = 1;
    }
    for(int j=1; j<v.size(); j++){
        for(int k=1; k<j; k++){
            v[j][k] = v[j-1][k-1] + v[j-1][k];
        }
    }
    return v[n][k];
}
struct edge{
    int to; // 辺の行き先
    int weight; // 辺の重み
    edge(int t, int w) : to(t), weight(w) { }
};
using graph = vector<vector<edge>>;
using Graph = vector<vector<int>>;

bool seen[501][501];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int H, W;

void dfs(int h, int w){
    seen[h][w] = true;
    rep(dir, 4){
        int nh = h + dx[dir];
        int nw = w + dy[dir];
        if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
        if(field[])
    }
}

int main(){
    int h, w; cin >> h >> w;

    Graph G(n);
    rep(i, m){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    
    //頂点0をスタートとした探索
    seen.assign(N, false);
    dfs(G, 0);
}
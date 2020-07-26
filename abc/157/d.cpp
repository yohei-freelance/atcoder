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

struct UnionFind{
    vector<int> par; // par[i]:iの親の番号 (e.g.)par[3]=2 : 3の親が2
    UnionFind(int N):par(N){ //最初は全てが根であるとして初期化
        rep(i, N) par[i] = i;
    }
    int root(int x){ // データxが属する木の根を再帰で得る : root[x] = {xの木の根}
        if(par[x] == x) return x;
        return par[x] = root(par[x]);
    }
    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx == ry) return;
        par[rx] = ry;
    }
    bool same(int x, int y){
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main(){
    int n, m, k; cin >> n >> m >> k;

}
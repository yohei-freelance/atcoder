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
    int weight; // 辺の重さ
};

using graph = vector<vector<edge>>;
using Graph = vector<vector<int>>;

vector<vector<int>> warshall_floyd(vector<vector<int>> c, int x, int y){
    for(int i=0; i<c.size(); i++){
        for(int j=0; j<c.size(); j++){
            c[i][j] = min(c[i][j], c[i][x] + c[x][y] + c[y][j]);
        }
    }
    return c;
}

int main(){
    int n, x, y; cin >> n >> x >> y;
    vector<vector<int>> d(n, vector<int>(n, inf));
    rep(i, n){
        int count = 0;
        for(int j=i; j < n; j++){
            d[i][j] = count;
            d[j][i] = count;
            count++;
        }
    }
    d[x-1][y-1] = 1;
    d = warshall_floyd(d, x-1, y-1);
    vector<int> ans(n, 0);
    rep(i, n){
        for(int j=i+1; j<n; j++){
            ans[d[i][j]] += 1;
        }
    }
    for(int i=1; i<n; i++) cout << ans[i] << endl;
    return 0;
}
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

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> relationship(n+1, vector<int>(n+1, 0));
    int tmp1, tmp2;
    rep(i, m){
        cin >> tmp1 >> tmp2;
        relationship[tmp1][tmp2] = 1;
        relationship[tmp2][tmp1] = 1;
    }
    int ans = 0;
    for(int bit=0; bit<(1<<n); ++bit){
        vector<int> S(n+1, 0);
        int member = 0;
        for(int i=0; i<n; ++i){
            if(bit & (1<<i)){
                S[i+1] = 1;
                member++;
            }
        }
        bool group = true;
        for(int i=1; i<=S.size()-1; i++){
            for(int j=i+1; j<S.size(); j++){
                if(relationship[i][j] != 1) group=false;
            }
        }
        if(group) ans = max(ans, member);
    }
    cout << ans << endl;
    return 0;
}
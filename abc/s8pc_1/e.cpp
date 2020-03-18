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
struct edge{
    int to; // 辺の行き先
    int weight; // 辺の重み
    edge(int t, int w) : to(t), weight(w) { }
};
using graph = vector<vector<edge>>;
using Graph = vector<vector<int>>;

int main(){
    int n, q; cin >> n >> q;
    vector<ll> distance(n, 0);
    vector<ll> a(n);
    vector<ll> c(q+1);
    rep(i, n){cin >> a[i];}
    for(int i=1; i<=q; i++){cin >> c[i];}
    for(int i=1; i<n; i++){distance[i] = Pow<ll>(a[i-1], a[i], MOD);}
    // 累積和
    for(int i=1; i<n; i++){
        distance[i] += distance[i-1];
        distance[i] %= MOD;
    }
    ll cur_place = 1;
    ll ans = 0;
    for(int i=1; i<=q; i++){
        ans += abs(distance[c[i]-1] - distance[cur_place-1]);
        ans %= MOD;
        cur_place = c[i];
    }
    ans += distance[cur_place-1];
    ans %= MOD;
    cout << ans << endl;
    return 0;
}
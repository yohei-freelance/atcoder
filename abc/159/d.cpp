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
    int n; cin >> n;
    vector<int> a;
    vector<int> b(n, 0);
    int tmp;
    ll basic_ans = 0;
    rep(i, n){
        cin >> tmp;
        a.push_back(tmp);
        b[tmp-1] += 1;
    }
    rep(i, n){
        if(b[i] >= 2) basic_ans += (ll)b[i]*(b[i]-1)/2;
    }
    rep(i, n){
        if(b[a[i]-1] >= 2){
            cout << basic_ans - b[a[i]-1] + 1 << endl;
        }else{
            cout << basic_ans << endl;
        }
    }
    return 0;
}
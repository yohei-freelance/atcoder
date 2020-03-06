#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define REP(i, n) for(int i=0; i<n; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

ll PowMod_RepeatSquaring(ll N, ll P, ll M){
    if(P==0) return 1;
    if(P%2==0){
        ll t = PowMod_RepeatSquaring(N, P/2, M);
        return t*t % M;
    }
    return N * PowMod_RepeatSquaring(N, P-1, M);
}

ll modinv(ll a, ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

int main(){
    ll n, a, b; cin >> n >> a >> b;
    ll ans = PowMod_RepeatSquaring(2, n, MOD) - 1;
    // nCaとnCbを求める
    ll a_fact = 1;
    ll b_fact = 1;
    ll a_x = 1;
    ll b_x = 1;
    for(int i=1; i<=a; i++){
        a_fact *= i;
        a_fact %= MOD;
    }
    REP(i, a){
        a_x *= n-i;
        a_x %= MOD;
    }
    for(int i=1; i<=b; i++){
        b_fact *= i;
        b_fact %= MOD;
    }
    REP(i, b){
        b_x *= n-i;
        b_x %= MOD;
    }
    ll a_com = a_x * modinv(a_fact, MOD) % MOD;
    ll b_com = b_x * modinv(b_fact, MOD) % MOD;
    ans -= a_com;
    ans -= b_com;
    if(ans < 0){
        bool minus = true;
        while(minus){
            ans += MOD;
            if(ans >= 0){
                minus = false;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
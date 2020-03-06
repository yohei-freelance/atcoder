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

ll fac[MAX], finv[MAX], inv[MAX];
ll count_prs;

void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

ll PowMod_RepeatSquaring(ll N, ll P, ll M){
    ++count_prs;
    if(P==0) return 1;
    if(P%2==0){
        ll t = PowMod_RepeatSquaring(N, P/2, M);
        return t*t % M;
    }
    return N * PowMod_RepeatSquaring(N, P-1, M);
}

int main(){
    COMinit();
    ll n, a, b; cin >> n >> a >> b;
    ll ans = PowMod_RepeatSquaring(2, n, MOD) - 1;
    ans -= COM(n, a);
    ans -= COM(n, b);
    if(ans > 0) cout << ans << endl;
    else{
        ans += MOD;
        if(ans < 0){
            ans += MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
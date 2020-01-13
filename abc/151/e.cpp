#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf = 1e9;
const int MAX = 1e5+5;
const ll MOD = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

long long fac[MAX], finv[MAX], inv[MAX];

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

long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main(){
    COMinit();
    ll n, k; cin >> n >> k;
    ll ans = 0;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i=k-1; i<n; i++){
        ans += (a[i] - a[n-i-1]) * COM(i, k-1);
        ans = ans % MOD;
    }
    cout << ans << endl;
    return 0;
}
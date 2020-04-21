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

ll fact[1000001];

int main(){
    ll n, k; cin >> n >> k;
    ll ans = 0;
    vector<ll> arr(n+1);
    rep(i, n+1) arr[i] = i;
    ll min = 0, max = 0;
    rep(i, k){
        min += arr[i];
        max += arr[n-i];
    }
    while(k <= n+1){
        ans += max - min + 1;
        min += arr[k];
        max += arr[n-k];
        k++;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
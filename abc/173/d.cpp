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

int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a), greater<ll>());
    ll ans = a[0];
    n--;
    n--;
    int i=1;
    while(n > 0){
        ans += a[i];
        n--;
        if(n > 0) ans += a[i];
        n--;
        i++;
    }
    cout << ans << endl;
    return 0;
}
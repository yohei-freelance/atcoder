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
    ll n, k; cin >> n >> k;
    vector<ll> plus(n, 0), minus(n, 0);
    vector<ll> abso;
    ll tmp;
    ll ans = 1;
    ll k_copy = k;
    int plus_now = 0;
    int minus_now = 0;
    bool include_zero = false;
    rep(i, n){
        cin >> tmp;
        if(tmp >= 0){
            plus[plus_now] = tmp;
            plus_now++;
        }else{
            minus[minus_now] = tmp;
            minus_now++;
        }
        if(tmp == 0) include_zero = true;
        abso.push_back(abs(tmp));
    }
    sort(all(plus), greater<ll>());
    sort(all(minus));
    int plus_idx = 0;
    int minus_idx = 0;
    while(k > 1){
        if(plus[plus_idx] * plus[plus_idx + 1] > minus[minus_idx] * minus[minus_idx + 1]){
            ans *= plus[plus_idx];
            ans %= MOD;
            ans *= plus[plus_idx + 1];
            ans %= MOD;
            plus_idx += 2;
        }else{
            ll minus_tmp = minus[minus_idx] * minus[minus_idx + 1] % MOD;
            ans *= minus_tmp;
            ans %= MOD;
            minus_idx += 2;
        }
        k -= 2;
    }
    if(k == 1){
        if(plus[plus_idx] >= 0){
            ans *= plus[plus_idx];
        }else if(plus[plus_idx] == 0 && include_zero == true){
            ans *= 0;
        }else{
            ans *= minus[minus_idx];
        }
    }
    ans %= MOD;
    if(ans >= 0){
        cout << ans << endl;
        return 0;
    }
    sort(all(abso));
    ll new_ans = 1;
    rep(i, k_copy){
        new_ans *= abso[i];
        new_ans %= MOD;
    }
    new_ans *= -1;
    new_ans += MOD;
    cout << new_ans << endl;
    return 0;
}
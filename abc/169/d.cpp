#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

ll sum_pyramid(ll num){
    ll current_num = 0;
    while(num > 0){
        current_num++;
        num -= current_num;
    }
    if(num < 0) return current_num - 1;
    else return current_num;
}

int main(){
    ll n; cin >> n;
    ll ans = 0;
    ll n_; n_ = n;
    for(ll i=2; i*i <= n; i++){
        ll division = 0;
        while(n_ % i==0){
            division++;
            n_ /= i;
        }
        ans += sum_pyramid(division);
    }
    if(n_ != 1) ans++;

    if(n == 1) cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}
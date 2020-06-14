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

int main(){
    int n; cin >> n;
    vector<bool> dp(1e6+1, true);
    vector<int> a(n), a_ori;
    rep(i, n) cin >> a[i];
    sort(all(a));
    a_ori = a;
    a.erase(unique(all(a)), a.end());
    ll multi, ans = 0;
    rep(i, a.size()){
        multi = 2;
        if(dp[a[i]] == true){
            while(a[i] * multi <= 1e6){
                dp[a[i] * multi] = false;
                multi++;
            }
        }
    }
    vector<int> b;
    int cur_idx = 0;
    int cur_num = a_ori[0];
    int count = 1;
    while(cur_idx < a_ori.size()){
        cur_idx++;
        if(cur_num == a_ori[cur_idx]) count++;
        else{
            if(count == 1) b.push_back(cur_num);
            cur_num = a_ori[cur_idx];
            count = 1;
        }
    }
    rep(i, b.size()) if(dp[b[i]] == true) ans++;
    cout << ans << endl;
    return 0;
}
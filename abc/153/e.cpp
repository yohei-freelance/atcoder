// DP
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define REP(i, n) for(int i=0; i<n; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll mod = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    ll h, n; cin >> h >> n;
    vector<ll> a(n);
    ll max_damage = 0;
    vector<ll> b(n);
    REP(i, n){
        cin >> a[i] >> b[i];
        max_damage = max(a[i], max_damage);
    }
    // vectorの長さは後で考える
    vector<ll> dp(h+max_damage, INF);
    dp[0] = 0;
    REP(i, h){
        REP(j, n){
            dp[a[j]+i] = min(dp[a[j]+i], b[j]+dp[i]);
        }
    }
    ll ans = INF;
    REP(i, max_damage){
        ans = min(ans, dp[h+i]);
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
/*using P = pair<int, int>;*/
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

int main(){
    int n, m, x; cin >> n >> m >> x;
    vector<vector<int> > a(n, vector<int>(m));
    vector<int> c(n);
    rep(i, n){
        cin >> c[i];
        rep(j, m) cin >> a[i][j];
    }
    // bit全探索
    int ans = inf;
    for (int bit = 0; bit < (1<<n); ++bit){
        vector<int> S;
        int tmp_ans = 0;
        vector<int> understandings(m, 0);
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                tmp_ans += c[i];
                rep(j, m) understandings[j] += a[i][j];
            }
        }
        bool understand = true;
        rep(j, m){
            if(understandings[j] < x) understand = false;
        }
        if(understand) ans = min(ans, tmp_ans);
    }
    if(ans != inf) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}
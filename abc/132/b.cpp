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
    int n; cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int ans = 0;
    rep(i, n-1){
        if(p[i] < p[i+1] && p[i+1] < p[i+2]) ans += 1;
        else if(p[i] > p[i+1] && p[i+1] > p[i+2]) ans += 1;
    }
    cout << ans << endl;
    return 0;
}
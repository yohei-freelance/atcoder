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
    str s; cin >> s;
    int ans = inf;
    rep(i, s.size()-2){
        str substr = s.substr(i, 3);
        int subint = stoi(substr);
        ans = min(abs(subint - 753), ans);
    }
    cout << ans << endl;
    return 0;
}
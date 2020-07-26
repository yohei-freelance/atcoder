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
    str s, t; cin >> s >> t;
    bool same = true;
    rep(i, s.size()){
        if(s[i] != t[i]) same = false;
    }
    if (same) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
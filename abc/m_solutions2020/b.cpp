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
    int a, b, c; cin >> a >> b >> c;
    int k; cin >> k;
    int ans = 0;
    while(a >= b){
        ans++;
        b *= 2;
    }
    while(b >= c){
        ans++;
        c *= 2;
    }
    if(ans <= k) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
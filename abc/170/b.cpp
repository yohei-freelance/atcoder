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
    int total, leg; cin >> total >> leg;
    bool exist = false;
    rep(i, total+1){
        if(i*2 + (total - i)*4 == leg) exist = true;
    }
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
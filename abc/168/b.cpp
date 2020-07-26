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
    int k; cin >> k;
    str s; cin >> s;
    if(s.size() <= k){
        cout << s << endl;
    }else{
        rep(i, k){
            cout << s[i];
        }
        cout << "..." << endl;
    }
    return 0;
}
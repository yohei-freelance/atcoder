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
    int x, n, tmp; cin >> x >> n;
    set<int> p;
    rep(i, n){
        cin >> tmp;
        p.insert(tmp);
    }
    bool found = false;
    int change = -1;
    while(!found){
        if(p.count(x) == 0){
            found = true;
            cout << x << endl;
        }
        else{
            x += change;
            if(change > 0) change = (change + 1)*(-1);
            else change = (change - 1)*(-1);
        }
    }
    return 0;
}
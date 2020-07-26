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
    int n, k; cin >> n >> k;
    vector<int> sunuke(n, 0);
    rep(i, k){
        int d; cin >> d;
        rep(j, d){
            int person; cin >> person;
            if(sunuke[person-1] == 0) sunuke[person-1] = 1;
        }
    }
    int ans = 0;
    rep(i, n) ans += sunuke[i];
    cout << n - ans << endl;
    return 0;
}
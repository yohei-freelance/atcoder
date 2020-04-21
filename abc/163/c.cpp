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
    vector<int> joshi(n+1, 0);
    int tmp;
    rep(i, n-1){
        cin >> tmp;
        joshi[tmp] += 1;
    }
    REP(i, n){
        cout << joshi[i] << endl;
    }
    return 0;
}
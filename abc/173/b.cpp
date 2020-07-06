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
    str s;
    int ac = 0, wa = 0, tle = 0, re = 0;
    rep(i, n){
        cin >> s;
        if(s == "AC") ac++;
        else if(s == "WA") wa++;
        else if(s == "TLE") tle++;
        else if(s == "RE") re++;
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl; 
    return 0;
}
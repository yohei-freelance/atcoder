#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf = 1e9;
const int MAX = 1e5+5;
const ll MOD = 1e9+7;
#define REP(i, n) for (int i = 0; i < (n); ++i)

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n, m; cin >> n >> m;
    vector<int> s(n, -1);
    int digit, num;
    bool error = false;
    int ans = 0;
    REP(i, m){
        cin >> digit >> num;
        if(s[digit-1] == -1) s[digit-1] = num;
        else if(s[digit-1] != num){
            error = true;
            break;
        }
    }
    if(s[0] == 0 && n >= 2) error = true;
    REP(i, n){
        if(i == 0 && s[i] == -1 && n >= 2) ans += pow(10, n-1);
        else if(s[i] != -1) ans += s[i] * pow(10, n-1-i);
        else continue;
    }
    if(!error) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}
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
    vector<int> a(n, -1);
    int s, c;
    if(m == 0){
        cout << pow(10, n-1) << endl;
        return 0;
    }
    REP(i, m){
        cin >> s >> c;
        if(a[s-1] == -1) a[s-1] = c;
        else if(a[s-1] != c){
            cout << -1 << endl;
            return 0;
        }
    }
    if(n != 1 && a[0] == 0){
        cout << -1 << endl;
        return 0;
    }
    int ans = 0;
    REP(i, n){
        if(i == 0 && n != 1 && a[i] == 0) ans += pow(10, n-1-i);
        else if(a[i] != -1) ans += a[i] * pow(10, n-1-i);
    }
    cout << ans << endl;
    return 0;
}
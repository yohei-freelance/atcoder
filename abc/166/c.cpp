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
    int n, m; cin >> n >> m;
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    priority_queue<int> impossible;
    rep(i, m){
        int mount1, mount2; cin >> mount1 >> mount2;
        if(h[mount1-1] > h[mount2-1]) impossible.push(mount2);
        else if(h[mount1-1] < h[mount2-1]) impossible.push(mount1);
        else{
            impossible.push(mount1);
            impossible.push(mount2);
        }
    }
    int ans = 0;
    int cur_mount;
    if(!impossible.empty()){
        cur_mount = impossible.top();
        impossible.pop();
        ans++;
    }
    while(!impossible.empty()){
        int new_mount = impossible.top();
        if(cur_mount != new_mount) ans++;
        cur_mount = new_mount;
        impossible.pop();
    }
    cout << n - ans << endl;
    return 0;
}
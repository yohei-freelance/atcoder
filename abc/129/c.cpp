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
    vector<ll> step(n+1, 0);
    step[0] = 1;
    priority_queue<int, vector<int>, greater<int>> p;
    int tmp;
    REP(i, m){
        cin >> tmp;
        p.push(tmp);
    }
    if(m != 0){
        tmp = p.top();
        p.pop();
        if(tmp == 1){
            step[1] = 0;
            tmp = p.top();
            p.pop();
        } else step[1] = 1;
    } else{
        tmp = 0;
        step[1] = 1;
    }
    for(int i=2; i<n; i++){
        if(i == tmp){
            step[i] = 0;
            tmp = p.top();
            p.pop();
        }else{
            step[i] = step[i-1] + step[i-2];
            step[i] %= MOD;
        }
    }
    ll ans;
    if(n >= 2) ans = (step[n-1] + step[n-2]) % MOD;
    else ans = step[1];
    cout << ans << endl;
    return 0;
}
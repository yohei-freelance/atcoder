#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n, m; cin >> n >> m;
    priority_queue<ll> que;
    for(int i=0; i<n; i++){
        ll tmp; cin >> tmp; 
        que.push(tmp);
    }
    for(int i=0; i<m; i++){
        ll discounted = que.top();
        que.pop();
        que.push(discounted/2);
    }
    ll ans = 0;
    for(int i=0; i<n; i++){
        ans += que.top();
        que.pop();
    }
    cout << ans << endl;
    return 0;
}
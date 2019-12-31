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
graph F, B;

vector<ll> dijkstra(int n, graph g){
    vector<ll> d(n+1, inf);
    priority_queue<P, vector<P>, greater<P>> que;
    que.push({0,1});
    d[1] = 0;
    while(que.size() != 0){
        P p = que.top();
        que.pop();
        int v = p.second;
        int cost = p.first;
        if (d[v] < cost) continue;
        for(int i=0; i < g[v].size(); i++){
            edge e = g[v][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to], e.to));
            }
        }
    }
    return d;
}

int main(){
    ll n, m, t; cin >> n >> m >> t;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    F.assign(n+1, vector<edge>());
    B.assign(n+1, vector<edge>());
    for(int i=0; i<m; i++){
        int a, b, c; cin >> a >> b >> c;
        F[a].push_back({b,c});
        B[b].push_back({a,c});
    }
    vector<ll> f = dijkstra(n, F);
    vector<ll> b = dijkstra(n, B);
    ll ans = 0;
    for(int i=1; i<=n; i++){
        ans = max(ans, (t-f[i]-b[i])*v[i-1]);
    }
    cout << ans << endl;
    return 0;
}
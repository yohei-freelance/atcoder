#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

// 幅優先探索
int main(){
    // input
    int N; cin >> N;
    vector<vector<int>> G(N);
    vector<pair<int, int>> vp;
    for(int i=1; i<N; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
        vp.emplace_back(a,b);
    }
    // manipulate

    int k = 0;
    map<pair<int,int>,int> I;
    vector<int> cs(N,0); // color of edge between its parent
    vector<int> used(N,0);
    queue<int> que;
    used[0] = 1;
    que.emplace(0);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        if(k < (int)G[v].size()){
            k = G[v].size();
        }
        int cur = 1;
        for(int u:G[v]){
            if(used[u]) continue;
            if(cur==cs[v]) cur++;
            cs[u]=I[make_pair(u,v)]=I[make_pair(v,u)]=cur++;
            used[u]=1;
            que.emplace(u);
        }
    }
 
    cout << k << endl;
    for(auto p:vp) cout << I[p] << endl;
    return 0;
}
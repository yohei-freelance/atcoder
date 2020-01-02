// 

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;
const ll linf = 1e18;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

//ワ―シャルフロイド法 O(n^3);
vector<vector<ll>> warshall_floyd(vector<vector<ll>> c){
    for(int k=0; k<c.size(); k++){
        for(int i=0; i<c.size(); i++){
            for(int j=0; j<c.size(); j++){
                c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
            }
        }
    }
    return c;
}

int main(){
    ll n, m, r; cin >> n >> m >> r;
    vector<ll> R(r);
    for(int i=0; i<r; i++){
        cin >> R[i];
    }
    // 配列を入れるスペースの初期化;
    vector<vector<ll>> d(n, vector<ll>(n, inf));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                d[i][j] = 0;
            }
        }
    }
    for(int i=0; i<m; i++){
        int a, b, c; cin >> a >> b >> c;
        if (c < d[a-1][b-1]){
            d[a-1][b-1] = c;
            d[b-1][a-1] = c;
        }
    }

    // 道での移動の最適化;
    vector<vector<ll>> e = warshall_floyd(d);
    ll cost = linf;
    
    // rについて全探索;
    do {
        ll cur_cost = 0;
        for(int i=0; i<R.size()-1; i++){
            cur_cost += e[R[i]-1][R[i+1]-1];
        }
        cost = min(cost, cur_cost);
    } while ( next_permutation(R.begin(), R.end()) );
    cout << cost << endl;
    return 0;
}
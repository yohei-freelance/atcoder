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

vector<vector<int>> warshall_floyd(vector<vector<int>> c){
    for(int k=0; k<c.size(); k++){
        for(int i=0; i<c.size(); i++){
            for(int j=0; j<c.size(); j++){
                c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
            }
        }
    }
    return c;
}

// ワ―シャルフロイド法
int main(){
    int n, m, r; cin >> n >> m >> r;
    vector<int> R(r);
    for(int i=0; i<r; i++){
        cin >> R[i];
    }
    // 配列を入れるスペース.
    int n_rows = 201;
    int n_cols = 201;
    int value = inf;
    vector<vector<int>> d(n_rows, vector<int>(n_cols, value));
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i == j){
                d[i][j] = 0;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            int a, b, c; cin >> a >> b >> c;
            d[a][b] = c;
            d[b][a] = c;
        }
    }
    int ans = 0;
    vector<vector<int>> d = warshall_floyd(d);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(a[i][j] != -1){
                ans += to_one[a[i][j]];
            }
        }
    }
    cout << ans << endl;
    return 0;
}
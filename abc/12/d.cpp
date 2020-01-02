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

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> d(n, vector<int>(n, inf));
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
    vector<vector<int>> e = warshall_floyd(d);
    int tmp_max = 0;
    int ans = inf;
    for(int i=0; i<n; i++){
        int tmp = 0;
        for(int j=0; j<n; j++){
            tmp = max(tmp, e[i][j]);
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}
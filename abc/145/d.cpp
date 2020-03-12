#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define REP(i, n) for(int i=0; i<n; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll mod = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;]

vector<vector<ll>> comb(int n, int r){
    vector<vector<ll>> v(n+1, vector<ll>(n+1, 0));
    for(int i=0; i<v.size(); i++){
        v[i][0] = 1;
        v[i][i] = 1;
    }
    for(int j=1; j<v.size(); j++){
        for(int k=1; k<j; k++){
            v[j][k] = (v[j-1][k-1]+v[j-1][k]);
        }
    }
    return v[n][r];
}

int main(){
    int x, y; cin >> x >> y;
    comb(x, y);
}
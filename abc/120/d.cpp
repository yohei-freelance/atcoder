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
    vector<vector<int>> islands(n+1, vector<int>(n+1, 0));
    int a, b;
    REP(i, m){
        cin >> a >> b;
        islands[a][b] = 1;
        islands[b][a] = 1;
        
    }
}
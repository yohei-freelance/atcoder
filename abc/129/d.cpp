#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

char grid[2002][2002];
int L[2002][2002];
int R[2002][2002];
int D[2002][2002];
int U[2002][2002];

int main(){
    int h, w; cin >> h >> w;
    rep(i, 2001){
        rep(j, 2001){
            grid[i][j] = '#';
            L[i][j] = 0;
            R[i][j] = 0;
            D[i][j] = 0;
            U[i][j] = 0;
        }
    }
    REP(i, h){
        str s; cin >> s;
        REP(j, w){
            grid[i][j] = s[j-1];
        }
    }
    REP(i, h+1){
        REP(j, w+1){
            if(grid[i][j] == '.') L[i][j] = L[i][j-1] + 1;
            else L[i][j] = 0;
            if(grid[i][w-j+1] == '.') R[i][w-j+1] = R[i][w-j+2] + 1;
            else R[i][w-j+1] = 0;
        }
    }
    REP(i, w+1){
        REP(j, h+1){
            if(grid[j][i] == '.') U[j][i] = U[j-1][i] + 1;
            else U[j][i] = 0;
            if(grid[h-j+1][i] == '.') D[h-j+1][i] = D[h-j+2][i] + 1;
            else D[h-j+1][i] = 0;
        }
    }
    int ans = 0;
    rep(i, 2001){
        rep(j, 2001){
            ans = max(L[i][j] + R[i][j] + U[i][j] + D[i][j] - 3, ans);
        }
    }
    cout << ans << endl;
    return 0;
}
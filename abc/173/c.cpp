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

int main(){
    int h, w, k; cin >> h >> w >> k;
    vector<vector<char>> grid(h, vector<char>(w));
    int black = 0;
    rep(i, h){
        rep(j, w){
            cin >> grid[i][j];
            if(grid[i][j] == '#') black++;
        }
    }
    int ans = 0;
    for(int bit_h = 0; bit_h < (1<<h); bit_h++){
        for(int bit_w = 0; bit_w < (1<<w); bit_w++){
            for (int i = 0; i < n; ++i) {
                if (bit & (1<<i))
    return 0;
}
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
using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    vector<ll> h(n);
    REP(i, n){
        cin >> h[i];
    }
    int cur_height = h[0];
    int ans = 0;
    int tmp_ans = 0;
    for(int i=1; i<n; i++){
        if(h[i]<=cur_height){
            tmp_ans += 1;
        }else{
            ans = max(ans, tmp_ans);
            tmp_ans = 0;
        }
        cur_height = h[i];
    }
    ans = max(ans, tmp_ans);
    cout << ans << endl;
    return 0;
}
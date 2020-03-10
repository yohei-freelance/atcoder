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
    int a, b, m; cin >> a >> b >> m;
    vector<int> A(a+1, 1e9);
    vector<int> B(b+1, 1e9);
    REP(i, a){
        cin >> A[i+1];
    }
    REP(i, b){
        cin >> B[i+1];
    }
    int x, y, c;
    int ans = 1e9;
    REP(i, m){
        cin >> x >> y >> c;
        ans = min(A[x] + B[y] - c, ans);
    }
    sort(ALL(A));
    sort(ALL(B));
    ans = min(A[0] + B[0], ans);
    cout << ans << endl;
    return 0;
}
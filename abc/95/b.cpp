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
    int n, x; cin >> n >> x;
    vector<int> m;
    int tmp;
    int gram = 0;
    int ans = 0;
    REP(i, n){
        cin >> tmp;
        m.push_back(tmp);
        gram += tmp;
        ans += 1;
    }
    sort(ALL(m));
    while(gram <= x){
        gram += m[0];
        ans += 1;
    }
    cout << ans-1 << endl;
    return 0;
}
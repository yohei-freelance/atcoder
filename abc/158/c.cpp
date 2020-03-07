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
    double a, b; cin >> a >> b;
    double maxim = max(ceil(a/8.0*100.0), b*10);
    if(ceil(a/8.0*100.0) >= b*10){
        if(floor(maxim * 0.1) == b) cout << maxim << endl;
        else cout << -1 << endl;
    }else{
        if(floor(maxim * 0.08) == a) cout << maxim << endl;
        else cout << -1 << endl;
    }
    return 0;
}
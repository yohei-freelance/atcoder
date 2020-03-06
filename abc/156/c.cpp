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
    vector<int> x(n);
    int center = 0;
    REP(i, n){
        cin >> x[i];
        center += x[i];
    }
    center /= n;
    ll ans1 = 0;
    ll ans2 = 0;
    REP(i, n){
        ans1 += (ll)pow(abs(x[i] - center), 2);
    }
    center += 1;
    REP(i, n){
        ans2 += (ll)pow(abs(x[i] - center), 2);
    }
    cout << min(ans1, ans2) << endl;
    return 0;
}
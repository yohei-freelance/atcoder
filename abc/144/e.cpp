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
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    vector<ll> f(n);
    REP(i, n){cin >> a[i];}
    REP(i, n){cin >> f[i];}
    sort(ALL(a)); //昇順
    sort(ALL(f), greater<ll>()); //降順
    bool converge = true;
    ll upper = INF;
    ll lower = 0;
    ll tmp_dot;
    ll difference;
    ll criterion;
    // 二分探索
    while(upper - lower > 1){
        difference = 0;
        criterion = (lower+upper)/2;
        REP(i, n){
            tmp_dot = a[i] * f[i];
            if(tmp_dot > criterion){
                difference += (ll)ceil((double)(tmp_dot-criterion) / (double)f[i]);
            }
        }
        if(difference <= k){
            upper = criterion;
        }else{
            lower = criterion;
        }
    }
    ll lo_dif = 0;
    REP(i, n){
        tmp_dot = a[i] * f[i];
        if(tmp_dot > lower){
            lo_dif += (ll)ceil((double)(tmp_dot-lower) / (double)f[i]);
        }
    }
    if(lo_dif<=k){
            cout << lower << endl;
    }else{
        cout << upper << endl;
    }
    return 0;
}
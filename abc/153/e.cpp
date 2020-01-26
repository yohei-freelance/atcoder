#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;
const ll mod = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    ll h, n; cin >> h >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<double> perf(n);
    for(ll i=0; i<n; i++){
        cin >> a[i] >> b[i];
        perf[i] = a[i]/(double)b[i];
    }
    sort(perf.begin(), perf.end(), greater<ll>());
    double tmp;
    vector<ll> c(n);
    vector<ll> d(n);
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            if(a[j]/(double)b[j] == perf[i]){
                c[i] = a[j];
                d[i] = b[j];
            }
        }
    }
    bool notdone = true;
    ll mp = 0;
    ll perf_idx = 0;
    while(notdone){
        if(h >= c[perf_idx]){
            mp += d[perf_idx];
            h -= c[perf_idx];
        }else{
            for(ll i=0; i<n; i++){
                
            }
            perf_idx += 1;
        }
        if(h <= 0){
            notdone = false;
        }
    }
    cout << mp;
}
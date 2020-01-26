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
    ll n, k; cin >> n >> k;
    vector<ll> h(n);
    for(ll i=0; i<n; i++){
        cin >> h[i];
    }
    sort(h.begin(), h.end(), greater<ll>());
    ll ans = 0;
    ll check = 1;
    for(ll i=0; i<n; i++){
        if(check <= k){
            check += 1;
        }else{
            ans += h[i];
        }
    }
    cout << ans << endl;
}
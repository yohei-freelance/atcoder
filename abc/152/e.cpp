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

ll gcd(ll a, ll b){
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    cin >> a[0];
    ll tmp = a[0];
    ll lcms;
    for(int i=1; i<n; i++){
        cin >> a[i];
        lcms = lcm(tmp, a[i]);
        tmp = lcms % mod;
        //tmp = tmp % mod;
    }
    ll ans = 0;
    for(int i=0; i<n; i++){
        ans += tmp / a[i];
        ans = ans % mod;
    }
    cout << ans << endl;
    return 0;
}
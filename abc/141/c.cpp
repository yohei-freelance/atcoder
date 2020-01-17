#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    ll n, k, q; cin >> n >> k >> q;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        a[i] = 0;
    }
    for(int i=0; i<q; i++){
        ll tmp; cin >> tmp;
        a[tmp-1] += 1;
    }
    for(int i=0; i<n; i++){
        if(a[i] > q-k){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
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
    ll atk_sum = 0;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        atk_sum += a[i];
    }
    if(atk_sum >= h){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
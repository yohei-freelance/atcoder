#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    ll n; cin >> n;
    vector<ll> x(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
    }

}
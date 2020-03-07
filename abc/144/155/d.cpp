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
    vector<ll> plus;
    vector<ll> minus;
    vector<ll> all;
    ll tmp;
    REP(i, n){
        cin >> tmp;
        if(tmp >= 0){
            plus.push_back(tmp);
            all.push_back(tmp);
        }else{
            minus.push_back(tmp);
            all.push_back(tmp*(-1));
        }
    }
    sort(ALL(plus), greater<ll>());
    sort(ALL(minus));
    if(k <= plus.size()*minus.size()){
        cout << plus[k/minus.size()] * minus[k%minus.size()] << endl;
    }else{
        
    }
}
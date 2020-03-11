#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const int inf = 1e9;
const int MAX = 1e5+5;
const ll MOD = 1e9+7;
#define REP(i, n) for (int i = 0; i < (n); ++i)

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n, m; cin >> n >> m;
    priority_queue<ll, vector<ll>, greater<ll>> a;
    ll tmp;
    REP(i, n){
        cin >> tmp;
        a.push(tmp);
    }
    int b;
    ll c;
    multimap<ll, int, greater<ll>> cards;
    REP(i, m){
        cin >> b >> c;
        cards.insert(make_pair(c, b));
    }
    bool breaking = false;
    for(auto const& entry: cards){
        c = entry.first;
        b = entry.second;
        REP(j, b){
            tmp = a.top();
            if(c > tmp){
                a.pop();
                a.push(c);
            }else{
                breaking = true;
                break;
            }
        }
        if(breaking) break;
    }
    ll ans = 0;
    while(!a.empty()){
        ans += a.top();
        a.pop();
    }
    cout << ans << endl;
    return 0;
}
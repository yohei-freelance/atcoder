#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

int main(){
    ll n, k, tmp; cin >> n >> k;
    vector<ll> a(n);
    rep(i, n){
        cin >> tmp;
        tmp--;
        a[i] = tmp;
    }
    set<ll> used;
    ll current_place = 0;
    vector<ll> history;
    while(used.count(current_place) == 0){
        used.insert(current_place);
        history.push_back(current_place);
        current_place = a[current_place];
    }
    history.push_back(current_place);
    used.insert(current_place);
    ll loop_start = INF, loop_end;
    rep(i, history.size()){
        if(history[i] == current_place){
            if(loop_start == INF) loop_start = i;
            else loop_end = i;
        }
    }
    if(k <= loop_start){
        current_place = 0;
        rep(i, k) current_place = a[current_place];
    }else{
        ll period = loop_end - loop_start;
        ll final_place = (k - loop_start) % period;
        current_place = 0;
        rep(i, final_place + loop_start) current_place = a[current_place];
    }
    cout << current_place + 1 << endl;
    return 0;
}
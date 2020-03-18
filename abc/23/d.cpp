#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define REP(i, n) for(int i=0; i<n; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;
template<typename T> T factorial(T n){
    if(n==1) return 1;
    else return n*factorial(n-1);
}
template<typename T> T combination(T n, T k){
    vector<vector<T>> v(n+1, vector<T>(n+1, 0)); //dpテーブル
    REP(i, v.size()){
        v[i][0] = 1; v[i][i] = 1;
    }
    for(int j=1; j<v.size(); j++){
        for(int k=1; k<j; k++){
            v[j][k] = v[j-1][k-1] + v[j-1][k];
        }
    }
    return v[n][k];
}
struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    vector<ll> h;
    vector<ll> s;
    ll tmp1, tmp2;
    // 二分探索
    ll lower_bound = 0;
    ll upper_bound = INF;
    REP(i, n){
        cin >> tmp1 >> tmp2;
        h.push_back(tmp1);
        s.push_back(tmp2);
    }
    ll criterion;
    ll diff = upper_bound - lower_bound;
    ll min_sec;
    vector<int> min_secs(n);
    while(diff>1){
        criterion = (lower_bound+upper_bound)/2;
        bool next_lower = false;
        REP(i, n){
            min_sec = (criterion - h[i]) / s[i];
            if(min_sec >= n){
                next_lower = true;
                break;
            }
            min_secs[i] = min_sec;
        }
        sort(ALL(min_secs));
        REP(i, min_secs.size()-1){
            if(min_secs[i+1] == min_secs[i]){
                min_secs[i+1] += 1;
            }
        }
        REP(i, min_secs.size()){
            if(min_secs[i] > i){
                next_lower = true;
                break;
            }
        }
        if(next_lower) upper_bound = criterion;
        else lower_bound = criterion;
        diff = upper_bound - lower_bound;
    }
    bool lower = false;
    REP(i, n){
        min_sec = (lower_bound - h[i]) / s[i];
        if(min_sec >= n){
            lower = true;
            break;
        }
        min_secs[i] = min_sec;
    }
    sort(ALL(min_secs));
    REP(i, min_secs.size()-1){
        if(min_secs[i+1] == min_secs[i]){
            min_secs[i+1] += 1;
        }
    }
    REP(i, min_secs.size()){
        if(min_secs[i] > i){
            lower = true;
            break;
        }
    }
    if(lower) cout << lower_bound << endl;
    else cout << upper_bound << endl;
    return 0;
}
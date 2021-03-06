#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(obj) (obj).begin(), (obj).end()
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
    rep(i, v.size()){
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
    int to; // 辺の行き先
    int weight; // 辺の重み
    edge(int t, int w) : to(t), weight(w) { }
};
using graph = vector<vector<edge>>;
using Graph = vector<vector<int>>;

int main(){
    ll n, k; cin >> n >> k;
    vector<ll> positives, negatives, zeros;
    ll tmp;
    ll positive = 0, negative = 0, zero = 0;
    rep(i, n){
        cin >> tmp;
        numbers.push_back(tmp);
        if(tmp > 0){positive++; positives.push_back(tmp);}
        else if(tmp < 0){negative++; negatives.push_back(tmp);}
        else{zero++; zeros.push_back(tmp);};
    }
    if(k <= positive * negative){
        sort(all(negatives));
        sort(all(positives));
        
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

str sub_problem(str sub_t, ll mod_k, ll start){
    str sub_prob;
    for(ll i=start; i<sub_t.length(); i+=mod_k){
        sub_prob = sub_prob + sub_t[i];
    }
    return sub_prob;
}

int main(){
    ll n, k; cin >> n >> k;
    ll r, s, p; cin >> r >> s >> p;
    str t; cin >> t;
    ll ans = 0;
    str tmp;
    char memory = 'q';
    map<char, ll> point;
    point['r'] = p;
    point['s'] = r;
    point['p'] = s;
    map<char, char> rsp;
    rsp['r'] = 's';
    rsp['s'] = 'p';
    rsp['p'] = 'r';
    // 貪欲法
    for (ll i=0; i<k; i++){
        tmp = sub_problem(t, k, i);
        for(ll j=0; j<tmp.length(); j++){
            if(tmp[j] != memory){
                ans += point[tmp[j]];
                memory = tmp[j];
            }else if(j != tmp.length()){
                memory = rsp[tmp[j+1]];
            }
        }
    }
    cout << ans << endl;
    return 0;
}
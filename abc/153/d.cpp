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

ll binary_tree(ll num){
    ll ans = 0;
    for(int i=0; i<=num; i++){
        ans += pow(2, i);
    }
    return ans;
}

int main(){
    ll h; cin >> h;
    bool divide_ok;
    if(h != 1){
        divide_ok = true;
    }else{
        divide_ok = false;
    }
    ll howmany_div = 1;
    while(divide_ok){
        h = h/2;
        howmany_div += 1;
        if(h == 1){
            divide_ok = false;
        }
    }
    cout << binary_tree(howmany_div) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf = 1e9;
const int MAX = 1e5+5;
const ll MOD = 1e9+7;
#define REP(i, n) for (int i = 0; i < (n); ++i)

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    ll a, b; cin >> a >> b;
    ll gcd = __gcd(a, b);
    ll ans = 0;
    ll lim = (int)sqrt(gcd)+1;
    for(int i=2; i<=lim; i++){
        if(gcd%i == 0){
            ans += 1;
            gcd /= i;
        }
        while(gcd%i == 0){
            gcd /=i;
        }
        if(gcd < i) break;
    }
    if(gcd > 1) ans += 1;
    cout << ans+1 << endl;
    return 0;
}
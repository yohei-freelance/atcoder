#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
/*using P = pair<int, int>;*/
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;


int main(){
    ll x, a, b; cin >> x;
    b = 0;
    while(1){
        ll current_num = x + b*b*b*b*b;
        ll current_num_m = x - b*b*b*b*b;
        a = 0;
        while(a*a*a*a*a<current_num){
            a++;
        }
        if(a*a*a*a*a==current_num){
            cout << a << " " << b << endl;
            break;
        }
        a = 0;
        while(a*a*a*a*a<current_num_m){
            a++;
        }
        if(a*a*a*a*a==current_num_m){
            cout << a << " " << b * (-1) << endl;
            break;
        }
        b++;
    }
    return 0;
}
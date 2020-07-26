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
    int n; cin >> n;
    int dig = n%10;
    if(dig == 3){
        cout << "bon" << endl;
    }else if(dig == 0 || dig == 1 || dig == 6 || dig == 8){
        cout << "pon" << endl;
    }else{
        cout << "hon" << endl;
    }
    return 0;
}
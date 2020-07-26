#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll money = 1000, stock = 0;
    vector<ll> stock_upper, stock_lower;
    bool want_bottom;
    rep(i, n-1){
        if(a[i] < a[i+1]){
            want_bottom = true;
            break;
        }else if(a[i] > a[i+1]){
            want_bottom = false;
            break;
        }
        want_bottom = false;
    }
    ll current_price = a[0];
    REP(i, n-1){
        if(current_price < a[i]){
            if(want_bottom){
                stock_lower.push_back(current_price);
                want_bottom = false;
            }
        }else if(current_price > a[i]){
            if(!want_bottom){
                stock_upper.push_back(current_price);
                want_bottom = true;
            }
        }
        current_price = a[i];
    }
    if(!want_bottom) stock_upper.push_back(a[n-1]);
    /*
    rep(i, (int)stock_upper.size()){
        cout << stock_upper[i] << endl;
    }
    cout << stock_lower.size() << endl;
    cout << stock_upper.size() << endl;
    */
    if(stock_lower.size() == stock_upper.size()){
        rep(i, (int)stock_lower.size()){
            stock = money / stock_lower[i];
            money -= stock * stock_lower[i];
            money += stock * stock_upper[i];
            stock = 0;
        }
    }else{
        rep(i, (int)stock_lower.size()){
            stock = money / stock_lower[i];
            money -= stock * stock_lower[i];
            money += stock * stock_upper[i+1];
            stock = 0;
        }
    }
    cout << money << endl;
    return 0;
}
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

unsigned GetDigit(unsigned num){
    return std::to_string(num).length();
}

int main(){
    queue<ll> q;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll n; cin >> n;
    q.push(3); pq.push(3);
    q.push(5); pq.push(5);
    q.push(7); pq.push(7);
    ll x;
    cout << setprecision(15) << M_PI << endl;
    while(x < n){
        x = q.front();
        q.push(pow(10, GetDigit(x)) * 3 + x);
        pq.push(pow(10, GetDigit(x)) * 3 + x);
        q.push(pow(10, GetDigit(x)) * 5 + x);
        pq.push(pow(10, GetDigit(x)) * 5 + x);
        q.push(pow(10, GetDigit(x)) * 7 + x);
        pq.push(pow(10, GetDigit(x)) * 7 + x);
        q.pop();
    }
    int ans = 0;
    while(!pq.empty()){
        bool include_three = false, include_five = false, include_seven = false;
        ll current_num = pq.top();
        if(current_num > n) break;
        ll tmp = current_num;
        for(int div = GetDigit(current_num); div >= 0; div--){
            ll current_digit = (ll)pow(10, div);
            if(tmp / current_digit == 3) include_three = true;
            else if(tmp / current_digit == 5) include_five = true;
            else if(tmp / current_digit == 7) include_seven = true;
            tmp %= current_digit;
        }
        if(include_three && include_five && include_seven) ans += 1;
        pq.pop();
    }
    cout << ans << endl;
    return 0;
}
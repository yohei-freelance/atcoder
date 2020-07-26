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
    vector<vector<int>> dp(10, vector<int>(10, 0));
    int highest_digit, lowest_digit;
    int tmp;
    REP(i, n){
        lowest_digit = i % 10;
        tmp = i;
        while(tmp / 10 != 0){
            tmp /= 10;
        }
        highest_digit = tmp;
        dp[highest_digit][lowest_digit] += 1;
    }
    ll ans = 0;
    REP(i, 9){
        REP(j, 9){
            ans += ((ll)dp[i][j]) * ((ll)dp[j][i]);
        }
    }
    cout << ans << endl;
    return 0;
}
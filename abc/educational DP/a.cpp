#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;
const int minus_inf = -1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    vector<int> dp(n);
    vector<int> h(n);
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    dp[0] = 0;
    dp[1] = abs(h[1]-h[0]);
    for(int i=2; i<n; i++){
        dp[i] = min(dp[i-2]+abs(h[i]-h[i-2]), dp[i-1]+abs(h[i]-h[i-1]));
    }
    cout << dp[n-1] << endl;
    return 0;
}
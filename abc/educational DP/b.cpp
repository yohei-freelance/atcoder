#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const int inf =1e9;
const int minus_inf = -1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n, k; cin >> n >> k;
    vector<int> dp(n, inf);
    vector<int> h(n);
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    // initialization
    dp[0] = 0;
    if(k>=n){
        for(int i=1; i<=n; i++){
            dp[i] = abs(h[i]-h[0]);
        }
    }else{
        for(int i=1; i<=k; i++){
            dp[i] = abs(h[i]-h[0]);
        }
        for(int i=k; i<n; i++){
            for(int j=1; j<=k; j++){
                dp[i] = min(dp[i], dp[i-j]+abs(h[i]-h[i-j]));
            }
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}
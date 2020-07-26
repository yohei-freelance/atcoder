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
    vector<int> a(n+1, 0);
    REP(i, n) cin >> a[i];
    vector<int> ans(n+1, 0);
    for(int i=n; i>=1; i--){
        if(i*2 > n) ans[i] = a[i];
        else{
            int tmp = 0;
            int k = 2;
            while(i*k < n){
                tmp += ans[i*k];
                k++;
            }
            if(tmp % 2 == a[i]) ans[i] = 0;
            else ans[i] = 1;
        }
    }
    vector<int> for_ans;
    REP(i, n){
        if(ans[i] == 1) for_ans.push_back(i);
    }
    cout << for_ans.size() << endl;
    rep(i, for_ans.size()){
        cout << for_ans[i] << " ";
    }
    return 0;
}
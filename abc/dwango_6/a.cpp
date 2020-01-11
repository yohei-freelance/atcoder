#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    vector<str> s(n);
    vector<int> t(n);
    int ans = 0;
    for(int i=0; i<n; i++){
        cin >> s[i] >> t[i];
        ans += t[i];
    }
    str x; cin >> x;
    for(int i=0; i<n; i++){
        if(x != s[i]){
            ans -= t[i];
        }else{
            ans -= t[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
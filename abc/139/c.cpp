#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const int inf =1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    vector<int> h(n);
    int ans, tmp_ans = 0;
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    int cur_step = h[0];
    for(int i=1; i<n; i++){
        if(cur_step >= h[i]){
            tmp_ans += 1;
            cur_step = h[i];
        }else{
            ans = max(tmp_ans, ans);
            tmp_ans = 0;
            cur_step = h[i];
        }
    }
    cout << ans << endl;
    return 0;
}
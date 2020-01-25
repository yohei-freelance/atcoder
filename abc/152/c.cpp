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
    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
    }
    int tmp_min = p[0];
    int ans = 1;
    if(n>1){
        for(int i=1; i<n; i++){
            if(p[i] <= tmp_min){
                ans += 1;
            }
            tmp_min = min(tmp_min, p[i]);
        }
    }
    cout << ans << endl;
    return 0;
}
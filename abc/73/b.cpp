#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;
const ll linf = 1e18;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    int ans = 0;
    for(int i=0; i<n; i++){
        int l, r; cin >> l >> r;
        ans += r - l + 1;
    }
    cout << ans << endl;
    return 0;
}

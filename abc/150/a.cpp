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
    str s; cin >> s;
    int ans = 0;
    for (int i=0; i<n-2; i++){
        if((s[i] == 'A') && (s[i+1] == 'B') && (s[i+2] == 'C')){
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}
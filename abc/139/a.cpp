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
    str s, t; cin >> s >> t;
    int ans = 0;
    for(int i=0; i<3; i++){
        if(s[i] == t[i]){
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}
// redo

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
    vector<int> a(n);
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        a[i] = tmp;
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int cur_ans = 1;
    int tmp = a[0];
    for(int i=1; i<n; i++){
        if(a[i] == tmp){
            cur_ans += 1;
        }else{
            if(cur_ans %2 == 1){
                ans += 1;
            }
            cur_ans = 1;
            tmp = a[i];
        }
    }
    cout << ans << endl;
    return 0;
}
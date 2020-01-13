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
    int n, m; cin >> n >> m;
    vector<int> wa(n);
    vector<int> ac(n);
    for(int i=0; i<n; i++){
        wa[i] = 0;
        ac[i] = 0;
    }
    for(int i=0; i<m; i++){
        int problem_num; cin >> problem_num;
        str problem_result; cin >> problem_result;
        if (problem_result == "WA"){
            if (ac[problem_num-1] == 0){
                wa[problem_num-1] += 1;
            }
        }else{
            if (ac[problem_num-1] == 0){
                ac[problem_num-1] += 1;
            }
        }
    }
    int ans_wa = 0;
    int ans_ac = 0;
    for(int i=0; i<n; i++){
        if (ac[i] != 0){
            ans_wa += wa[i];
            ans_ac += 1;
        }
    }
    cout << ans_ac << " " << ans_wa << endl;
    return 0;
}
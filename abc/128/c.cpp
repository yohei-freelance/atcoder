#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf = 1e9;
const int MAX = 1e5+5;
const ll MOD = 1e9+7;
#define REP(i, n) for (int i = 0; i < (n); ++i)

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n, m; cin >> n >> m;
    int tmp;
    int vec_tmp;
    vector<vector<int>> s(m);
    REP(i, m){
        cin >> tmp;
        REP(j, tmp){
            cin >> vec_tmp;
            s[i].push_back(vec_tmp);
        }
    }
    vector<int> p;
    REP(i, m){
        cin >> tmp;
        p.push_back(tmp);
    }
    int ans = 0;
    int tmp_ans = 0;
    bool all_on;
    // bit全探索
    for(int bit=0; bit<(1<<n); bit++){
        vector<int> S(n, 0);
        for(int i=0; i<n; i++){
            if(bit & (1<<i)){
                S[i] = 1;
            }
        }
        all_on = true;
        for(int i=0; i<m; i++){
            tmp_ans = 0;
            for(int j=0; j<s[i].size(); j++){
                if(S[s[i][j]-1] == 1) tmp_ans++;
            }
            if(tmp_ans%2!=p[i]) all_on = false;
        }
        if(all_on) ans++;
    }
    cout << ans << endl;
    return 0;
}
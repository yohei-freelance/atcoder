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
    int n, k; cin >> n >> k;
    vector<int> face;
    str s; cin >> s;
    int tmp = 1;
    REP(i, n-1){
        if(s[i] == s[i+1]) tmp += 1;
        else{
            face.push_back(tmp);
            tmp += 1;
        }
    }
    face.push_back(tmp);
    int ans = 0;
    int tmp_ans;
    for(int i=0; i<face.size()-k*2-1; i++){
        tmp_ans = face[i+k*2+1] - face[i];
        ans = max(ans, tmp_ans);
    }
    cout << ans << endl;
    return 0;
}
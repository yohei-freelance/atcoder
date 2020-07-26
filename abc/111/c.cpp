#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;

int main(){
    int n; cin >> n;
    map<int, int> v_1, v_2;
    int tmp_1, tmp_2;
    int max_val_1 = 1, max_val_2 = 1;
    rep(i, n/2){
        cin >> tmp_1 >> tmp_2;
        if(v_1.find(tmp_1) == v_1.end()) v_1.insert(make_pair(tmp_1, 1));
        else{
            v_1[tmp_1] += 1;
            max_val_1 = max(v_1[tmp_1], max_val_1);
        }
        if(v_2.find(tmp_2) == v_2.end()) v_2.insert(make_pair(tmp_2, 1));
        else{
            v_2[tmp_2] += 1;
            max_val_2 = max(v_2[tmp_2], max_val_2);
        }
    }
    cout << n - max_val_1 - max_val_2 << endl;
    return 0;
}
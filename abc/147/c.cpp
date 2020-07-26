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
const ll MAX = 1e9+7;

int bits[32768][15];

void bit_prep(int n){
    for(int bit = 0; bit < (1<<n); ++bit){
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) bits[bit][i] = 1;
            else bits[bit][i] = 0;
        }
    }
}

int main(){
    int n; cin >> n;
    vector<int> A(n);
    vector<vector<P>> testimony(n, vector<P>());
    rep(i, n){
        cin >> A[i];
        rep(j, A[i]){
            int x, y; cin >> x >> y;
            testimony[i].push_back(P(x, y));
        }
    }
    bit_prep(n);
    int ans = 0;
    rep(i, (1<<n)){
        bool can_count = true;
        int tmp_ans = 0;
        vector<int> note(n, -1);
        rep(j, n){
            if(bits[i][j] == 1){
                tmp_ans++;
                if(note[j-1] == 0) can_count = false;
                else note[j-1] = 1;
                rep(k, A[j]){
                    if(note[testimony[j][k].first - 1] == -1){
                        note[testimony[j][k].first - 1] = testimony[j][k].second;
                    }
                    else if(note[testimony[j][k].first - 1] != testimony[j][k].second) can_count = false;
                }
            }
            if(!can_count) break;
        }
        if(can_count) ans = max(ans, tmp_ans);
    }
    cout << ans << endl;
    return 0;
}
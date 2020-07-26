#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
/*using P = pair<int, int>;*/
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

int main(){
    ll n; cin >> n;
    vector<ll> height_pos;
    vector<ll> height_neg;
    ll height;
    for (ll i=1; i<=n; i++){
        cin >> height;
        height_pos.push_back(height + i);
        if(height - i < 0) height_neg.push_back((height - i) * (-1));
    }
    ll ans = 0;
    sort(all(height_pos));
    sort(all(height_neg));
    ll i = 0; ll j = 0;
    while(i < height_pos.size()-1){
        if(height_pos[i] == height_neg[j]){
            ll pos_num = 1;
            ll neg_num = 1;
            if(i < height_pos.size()-1){
                if(height_pos[i+1] == height_pos[i]){
                    i++;
                    pos_num++;
                }
                else break;
            }
            while(j < height_neg.size()-1){
                if(height_neg[j+1] == height_neg[j]){
                    j++;
                    neg_num++;
                }
                else break;
            }
            ans += pos_num * neg_num;
        }
        else if(height_pos[i] < height_neg[j]) i++;
        else if(height_pos[i] > height_neg[j]) j++;
    }
    cout << ans << endl;
    return 0;
}
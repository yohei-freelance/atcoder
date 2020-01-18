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
    vector<pair<ll, ll> > pairs(n);
    for(int i=0; i<n; i++){
        ll place, range; cin >> place >> range;
        pairs[i] = make_pair(range, place);
    }
    sort(pairs.begin(), pairs.end());
    vector<ll> mins(n);
    vector<ll> maxs(n);
    for(int i=0; i<n; i++){
        mins[i] = pairs[i].second - pairs[i].first;
        maxs[i] = pairs[i].second + pairs[i].first;
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        if(mins[i+1] > maxs[i]){
            ans += 1;
        }
    }
        cout << n - ans << endl;
    return 0;
}
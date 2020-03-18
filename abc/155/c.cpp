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
    int n; cin >> n;
    map<str, int> dict;
    str s;
    int maxim = 0;
    REP(i, n){
        cin >> s;
        if(dict.find(s) == dict.end()) dict[s]=1;
        else dict[s]++;
        maxim = max(maxim, dict[s]);
    }
    for(auto const& entry: dict){
        if(entry.second == maxim) cout << entry.first << endl;
    }
    return 0;
}
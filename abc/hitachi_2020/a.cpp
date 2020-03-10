#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define REP(i, n) for(int i=0; i<n; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll mod = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    str s; cin >> s;
    bool hitachi = false;
    if(s.size()%2 == 0){
        hitachi = true;
        for(int i=0; i<s.size()-1; i+=2){
            if(s[i] != 'h' || s[i+1] != 'i'){
                hitachi = false;
            }
        }
    }
    if(hitachi){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
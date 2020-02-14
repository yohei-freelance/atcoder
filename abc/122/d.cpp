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
    int n, q; cin >> n >> q;
    str s; cin >> s;
    vector<int> ac(n-1, 0);
    for(int i=0; i<n-1; i++){
        if(s[i]=='A' && s[i+1]=='C'){
            ac[i] = 1;
        }
    }
    int start, end;
    int tmp;
    REP(i, q){
        cin >> start >> end;
        tmp = 0;
        REP(j, end-start){
            tmp += ac[start+j];
        }
        cout << tmp << endl;
    }
}
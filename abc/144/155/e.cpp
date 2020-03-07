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

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

int main(){
    str n; cin >> n;
    ll ans = 0;
    bool upper = false;
    int tmp;
    for(int i=n.length()-1; i>=0; i--){
        tmp = ctoi(n[i]);
        if(tmp >= 6){
            ans += 10 - tmp;
            upper = true;
        }else if(tmp >= 6 && upper){
            ans += tmp + 1;
            upper = false;
        }else{
            ans += tmp;
        }
        if(i==0 && upper && tmp>=6){
            ans += 1;
        }
    }
    cout << ans << endl;
}
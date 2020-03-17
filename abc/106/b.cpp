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
    int n; cin >> n;
    int ans = 0;
    int tmp = 0;
    for(int i=1; i<=n; i+=2){
        tmp = 0;
        for(int j=1; j<=i; j++){
            if(i%j == 0) tmp += 1;
        }
        if(tmp == 8) ans += 1;
    }
    cout << ans << endl;
    return 0;
}
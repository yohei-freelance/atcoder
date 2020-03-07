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
    vector<int> a(n);
    bool approve = true;
    REP(i, n){
        cin >> a[i];
        if(a[i] % 2 == 0){
            if(a[i] % 3 == 0 || a[i] % 5 == 0){
                continue;
            }else{
                approve = false;
                break;
            }
        }
    }
    if(approve){
        cout << "APPROVED" << endl;
    }else{
        cout << "DENIED" << endl;
    }
}
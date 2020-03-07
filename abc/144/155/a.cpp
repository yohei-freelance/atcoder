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
    int a, b, c; cin >> a >> b >> c;
    if(a == b && b != c){
        cout << "Yes" << endl;
    }else if(b == c && c != a){
        cout << "Yes" << endl;
    }else if(c == a && a != b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
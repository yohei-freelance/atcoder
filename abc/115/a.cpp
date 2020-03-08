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
    int d; cin >> d;
    if(d==22){
        cout << "Christmas Eve Eve Eve" << endl;
    }else if(d==23){
        cout << "Christmas Eve Eve" << endl;
    }else if(d==24){
        cout << "Christmas Eve" << endl;
    }else{
        cout << "Christmas" << endl;
    }
    return 0;
}
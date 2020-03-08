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
    priority_queue<int, vector<int>, less<int>> q;
    int ans = 0;
    int tmp;
    REP(i, n){
        cin >> tmp;
        q.push(tmp);
    }
    ans += q.top()/2;
    q.pop();
    while(!q.empty()){
        ans += q.top();
        q.pop();
    }
    cout << ans << endl;
    return 0;
}
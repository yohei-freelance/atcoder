#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

int main(){
    int n; cin >> n;
    priority_queue<int> pq;
    vector<int> a;
    int input;
    rep(i, n){
        cin >> input;
        pq.push(input);
        a.push_back(input);
    }
    rep(i, a.size()){
        if(a[i] != pq.top()) cout << pq.top() << endl;
        else{
            int tmp = pq.top();
            pq.pop();
            cout << pq.top() << endl;
            pq.push(tmp);
        }
    }
    return 0;
}
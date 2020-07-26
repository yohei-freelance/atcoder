#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
/*using P = pair<int, int>;*/
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

int main(){
    int t, n, m; cin >> t >> n;
    priority_queue<int, vector<int>, greater<int> > a, b;
    int tmp;
    rep(i, n){
        cin >> tmp;
        a.push(tmp);
    }
    cin >> m;
    rep(i, m){
        cin >> tmp;
        a.push(tmp);
    }
    if(n < m){
        cout << "no" << endl;
        return 0;
    }
    
    int person;
    int takoyaki = a.top();
    a.pop();
    int ans = 0;
    while(!b.empty()){
        person = b.top();
        b.pop();
        if(!a.empty()){
            cout << "no" << endl;
            return 0;
        }
        while(person > takoyaki + t || person < takoyaki){
            takoyaki = a.top();
            a.pop();
        }
        if(person >= takoyaki && person <= takoyaki + t) ans += 1;
        takoyaki = a.top();
        a.pop();
    }
    if(ans == m) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;
const ll mod = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool same = false;
    for(int i=0; i<n-1; i++){
        if(a[i] == a[i+1]){
            same = true;
            break;
        }
    }
    if(same){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}
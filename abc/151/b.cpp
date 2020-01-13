#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n, k, m; cin >> n >> k >> m;
    vector<int> a(n-1);
    int target_score = n*m;
    for(int i=0; i<n-1; i++){
        cin >> a[i];
        target_score -= a[i];
    }
    if(0 >= target_score){
        cout << 0 << endl;
        return 0;
    }else if(target_score > k){
        cout << -1 << endl;
        return 0;
    }else{
        cout << target_score << endl;
        return 0;
    }
}
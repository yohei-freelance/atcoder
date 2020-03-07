#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf = 1e9;
const int MAX = 1e5+5;
const ll MOD = 1e9+7;

struct edge{
    int to;
    int cost;
};

using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    if(n%2==0) cout << n/2 << endl;
    else cout << n/2 + 1 << endl;
    return 0;
}
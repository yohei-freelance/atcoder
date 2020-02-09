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
    str s, t; cin >> s >> t;
    int a, b; cin >> a >> b;
    str tmp; cin >> tmp;
    if(tmp == s){
        cout << a-1 << " " << b;
    }else{
        cout << a << " " << b-1;
    }
}
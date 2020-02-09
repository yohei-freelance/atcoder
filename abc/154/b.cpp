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
    str s; cin >> s;
    for(int i=0; i<s.size(); i++){
        cout << 'x';
    }
    cout << endl;
}
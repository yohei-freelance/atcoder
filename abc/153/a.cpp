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
    int h, a; cin >> h >> a;
    int i=0;
    bool conti = true;
    while(conti){
        h -= a;
        i += 1;
        if(h <= 0){
            conti = false;
        }
    }
    cout << i << endl;
}
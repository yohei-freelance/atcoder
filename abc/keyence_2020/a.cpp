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
    int h, w, n; cin >> h >> w >> n;
    int larger = max(h, w);
    int colored = 0;
    for(int i=0; i<larger; i++){
        colored += larger;
        if(colored >= n){
            cout << i+1 << endl;
            break;
        }
    }
    return
}
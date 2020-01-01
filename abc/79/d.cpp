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

vector<int> warshall_floyd(vector<vector<int>> c){
    for(int k=0; k<c.size(); k++){
        for(int i=0; i<c.size(); i++){
            for(int j=0; j<c.size(); j++){
                c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
            }
        }
    }
    vector<int> to_one(c.size());
    for(int i=0; i<c.size(); i++){
        to_one[i] = c[i][1];
    }
    return to_one;
}

// ワ―シャルフロイド法
int main(){
    int h, w; cin >> h >> w;
    vector<vector<int>> c(10);
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            int tmp; cin >> tmp;
            c[i].emplace_back(tmp);
        }
    }
    vector<vector<int>> a(h);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            int tmp; cin >> tmp;
            a[i].emplace_back(tmp);
        }
    }
    int ans = 0;
    vector<int> to_one = warshall_floyd(c);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(a[i][j] != -1){
                ans += to_one[a[i][j]];
            }
        }
    }
    cout << ans << endl;
    return 0;
}
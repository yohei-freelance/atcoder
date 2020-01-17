#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const int inf =1e9;
const int minus_inf = -1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

// bit全探索
int main(){
    int n, m; cin >> n >> m;
    int switch(m)(n) = 0;
    vector<int> k(m);
    vector<int> p(m);
    for(int i=0; i<m; i++){
        cin >> k[i];
        for(int j=0; j<k[i]; j++){
            int tmp; cin >> tmp;
            switch[i][tmp-1] = 1;
        }
    }
    for(int i=0; i<m; i++){
        cin >> p[i];
    }
    for (int bit = 0; bit < (1<<m); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) {
                S.push_back(i);
            }
        }
        cout << bit << endl;
    }
}
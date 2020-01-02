#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;
const ll linf = 1e18;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    int dif; dif = 2025 - n;
    vector<int> former;
    vector<int> latter;
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            if(i*j == dif){
                former.push_back(i);
                latter.push_back(j);
            }
        }
    }
    for(int i=0; i<former.size(); i++){
        cout << former[i] << " x " << latter[i] << endl;
    }
    return 0;
}
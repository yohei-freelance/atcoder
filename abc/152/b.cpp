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
    int a, b; cin >> a >> b;
    if(a < b){
        for(int i=0; i<b; i++){
            cout << a;
        }
    }else if(a >= b){
        for(int i=0; i<a; i++){
            cout << b;
        }
    }
    return 0;
}
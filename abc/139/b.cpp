#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const int inf =1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int a, b; cin >> a >> b;
    int i=0;
    while((a-1)*i+1 < b){
        i++;
    }
    cout << i << endl;
    return 0; 
}
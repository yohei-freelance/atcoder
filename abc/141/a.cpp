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
    str s; cin >> s;
    if(s == "Sunny"){
        cout << "Cloudy";
    }else if(s == "Cloudy"){
        cout << "Rainy";
    }else{
        cout << "Sunny";
    }
    return 0;
}
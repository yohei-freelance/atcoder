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

str ZeroAttacher(str num){
    if(num.length() == 1){
        return '0' + num;
    }else{
        return str(num);
    }
}

int main(){
    int n; cin >> n;
    int h = n / 3600;
    int m = (n - 3600 * h) / 60;
    int s = n - 3600 * h - 60 * m;
    str hour; hour = to_string(h);
    str min; min = to_string(m);
    str sec; sec = to_string(s);
    cout << ZeroAttacher(hour) << ":" << ZeroAttacher(min) << ":" << ZeroAttacher(sec) << endl;
    return 0;
}
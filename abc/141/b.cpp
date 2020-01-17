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
    bool easy = true;
    for(int i=0; i<s.size(); i++){
        if(i%2 == 0){
            if(s[i] != 'R' && s[i] != 'U' && s[i] != 'D'){
                easy = false;
            }
        }else{
            if(s[i] != 'L' && s[i] != 'U' && s[i] != 'D'){
                easy = false;
            }
        }
    }
    if(easy){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
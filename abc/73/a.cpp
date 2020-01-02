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
    str n; cin >> n;
    char first_letter = n[0];
    char second_letter = n[1];
    if((first_letter == '9') || (second_letter == '9')){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf = 1e9;
const int MAX = 1e5+5;
const ll MOD = 1e9+7;
#define REP(i, n) for (int i = 0; i < (n); ++i)

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    vector<vector<int>> bingo(3, vector<int>(3));
    REP(i, 3){
        REP(j, 3){
            cin >> bingo[i][j];
        }
    }
    int n; cin >> n;
    int tmp;
    REP(i, n){
        cin >> tmp;
        REP(j, 3){
            REP(k, 3){
                if(tmp == bingo[j][k]) bingo[j][k] = -1;
            }
        }
    }
    bool aranged = false;
    REP(i, 3){
        if(bingo[i][0] == -1 && bingo[i][1] == -1 && bingo[i][2] == -1) aranged = true;
        if(bingo[0][i] == -1 && bingo[1][i] == -1 && bingo[2][i] == -1) aranged = true;
    }
    if(bingo[0][0] == -1 && bingo[1][1] == -1 && bingo[2][2] == -1) aranged = true;
    if(bingo[0][2] == -1 && bingo[1][1] == -1 && bingo[2][0] == -1) aranged = true;
    if(aranged) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
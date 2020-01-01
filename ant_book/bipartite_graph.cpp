#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

vector<int> G[MAX_V]; //グラフ
int V; //頂点の数

int color[MAX_V]; //頂点の色(1 or -1)

//頂点を1と-1で塗っていく
bool dfs(int v, int c){
    color[v] = c;
    for(int i=0; i<G[v].size(); i++){
        
    }
}
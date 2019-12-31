#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

// 後で戻ってくる.

int main(){
    int n; cin >> n;
    int N;
  cin>>N;
  vector<vector<int>> G(N);
  vector<pair<int,int>> vp;
  for(int i=1;i<N;i++){
    int a,b;
    cin>>a>>b;
    a--;b--;
    G[a].emplace_back(b);
    G[b].emplace_back(a);
    vp.emplace_back(a,b);}
}
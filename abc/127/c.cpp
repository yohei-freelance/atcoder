#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  vector<int> start(m);
  vector<int> endi(m);
  for(int i=0; i<m; i++){
    cin >> start[i] >> endi[i];
  }
  int max_start = *max_element(start.begin(), start.end());
  int min_end = *min_element(endi.begin(), endi.end());
  int ans; ans = min_end - max_start + 1;
  if(ans < 0){
    ans = 0;
  }
  cout << ans << endl;
}

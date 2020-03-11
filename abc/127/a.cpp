#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B; cin >> A >> B;
  int ans; ans=0;
  if(A >= 13){
    ans = B;
  }else if(A>=6){
    ans = B/2;
  }
  cout << ans << endl;
}
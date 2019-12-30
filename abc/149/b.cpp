#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
 
int main(){
  ll a, b, k; cin >> a >> b >> k;
  ll ans_a, ans_b;
  if(a >= k){
      ans_a = a - k;
      ans_b = b;
  }else if(a + b <= k){
      ans_a = 0;
      ans_b = 0;
  }else{
      ans_a = 0;
      ans_b = b - k + a;
  }
  cout << ans_a << " " << ans_b << endl;
  return 0;
}
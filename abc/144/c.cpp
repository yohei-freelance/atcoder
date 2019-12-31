#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
  long n; cin >> n;
  long maxs; maxs = sqrt(n);
  long a, b;
  for(long i=maxs; i>0; i--){
    if(n % i == 0){
      a = i;
      b = n/i;
      break;
    }
  }
  long ans; ans = a+b-2;
  cout << ans << endl;
  return 0;
}

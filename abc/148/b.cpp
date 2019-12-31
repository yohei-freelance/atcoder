#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
 
int main(){
  int n; cin >> n;
  str s, t; cin >> s >> t;
  for (int i=0; i<n; i++){
    printf("%c", s[i]);
    printf("%c", t[i]);
  }
  return 0;
}
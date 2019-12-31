#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
 
int main(){
  int a, b; cin >> a >> b;
  for (int i=1; i<=3; i++){
      if(a != i && b != i){
        cout << i << endl;
        return 0;
      }
  }
}
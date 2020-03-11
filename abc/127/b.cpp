#include <bits/stdc++.h>
using namespace std;

int main(){
  int r, d, x; cin >> r >> d >> x;
  int temp = 0;
  for(int i=0; i<10; i++){
    temp = r*x-d;
    cout << temp << endl;
    x = temp;
  }
}
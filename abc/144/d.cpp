#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
  double a, b, x; cin >> a >> b >> x;
  double h; h = x/pow(a,2.0);
  double ex; ex = b-h;
  double theta, deg;
  if(h >= b/2){
    theta = atan(2*ex/a);
    deg = theta*180/M_PI;
  }else{
    double tmp = 2*x/(a*b);
    theta = atan(tmp/b);
    deg = 90 - theta*180/M_PI;
  }
  cout << setprecision(10) << deg << endl;
  return 0;
}
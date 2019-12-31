#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
  int n; cin >> n;
  vector<double> x(n);
  vector<double> y(n);
  vector<double> dist(n*(n-1)/2);
  for(int i=0; i<n; i++){
    cin >> x[i] >> y[i];
  }
  double ans = 0.0;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      ans += pow(pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2), 0.5);
    }
  }
  ans = ans * 2 / n;
  cout << setprecision(10) << ans << endl;
  return 0;
}

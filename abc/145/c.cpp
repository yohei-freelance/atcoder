#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define REP(i, n) for(int i=0; i<n; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
  int n; cin >> n;
  vector<int> x;
  vector<int> y;
  vector<int> city_arange;
  int tmp1, tmp2;
  REP(i, n){
    cin >> tmp1 >> tmp2;
    x.push_back(tmp1);
    y.push_back(tmp2);
    city_arange.push_back(i);
  }
  double ans = 0;
  int num_ways = 0;
  do {
    // 拡張for文を利用してもよい.
    for(int i=0; i<city_arange.size()-1; i++){
      int cur_city = city_arange[i];
      int next_city = city_arange[i+1];
      ans += (double)sqrt(pow(x[next_city]-x[cur_city], 2)+pow(y[next_city]-y[cur_city], 2));
    }
    num_ways++;
  } while (next_permutation(city_arange.begin(), city_arange.end()));
  ans /= num_ways;
  cout << setprecision(11) << ans << endl;
  return 0;
}
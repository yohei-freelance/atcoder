#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;
const double pi = 3.14159265358979;

int main(){
    double a, b, h, m; cin >> a >> b >> h >> m;
    double hour = h / 12.0 * 2 * pi + m / 60.0 * pi / 6.0;
    double minute = m / 60.0 * 2 * pi;
    cout << setprecision(15) << sqrt(a*a + b*b - 2*a*b*cos(abs(hour-minute))) << endl;
    return 0;
}
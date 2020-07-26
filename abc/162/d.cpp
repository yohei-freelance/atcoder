#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;
template<typename T> T factorial(T n){
    if(n==1) return 1;
    else return n*factorial(n-1)%MOD;
}
template<typename T> T Pow(T x, T n, T m){
    if(n == 0) return 1;
    if(n % 2 == 0) return Pow(x * x % m, n / 2, m);
    else return x * Pow(x, n - 1, m) % m;
}
template<typename T> T combination(T n, T k, T m){
    return factorial<T>(n) * Pow<T>(factorial(k), m-2, m) % m * Pow<T>(factorial(n-k), m-2, m) % m;
}
struct edge{
    int to; // 辺の行き先
    int weight; // 辺の重み
    edge(int t, int w) : to(t), weight(w) { }
};
using graph = vector<vector<edge>>;
using Graph = vector<vector<int>>;

int rgb_supplement(vector<int> middle, vector<int> the_other1, vector<int> the_other2){
    int basic_ans = 0;
    int the_other1_size = the_other1.size();
    int the_other2_size = the_other2.size();
    int middle_size = middle.size();
    rep(i, the_other1_size){
        int cur_plc = 0;
        rep(j, the_other2_size){
            while(the_other1[i] + the_other2[j] < 2 * middle[cur_plc] && cur_plc < middle_size - 1) cur_plc++;
            if(the_other1[i] + the_other2[j] == 2 * middle[cur_plc]) basic_ans++;
        }
    }
    return basic_ans;
}

int main(){
    int n; cin >> n;
    str s; cin >> s;
    vector<int> r, g, b;
    REP(i, n){
        if(s[i-1] == 'R') r.push_back(i);
        else if(s[i-1] == 'G') g.push_back(i);
        else if(s[i-1] == 'B') b.push_back(i);
        else return 0;
    }
    int basic_ans = r.size() * g.size() * b.size();
    basic_ans -= rgb_supplement(r, g, b);
    basic_ans -= rgb_supplement(g, b, r);
    basic_ans -= rgb_supplement(b, r, g);
    basic_ans -= rgb_supplement(r, b, g);
    basic_ans -= rgb_supplement(g, r, b);
    basic_ans -= rgb_supplement(b, g, r);
    cout << basic_ans << endl;
    return 0;
}
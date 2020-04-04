#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
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

int ctoi(const char c){
  return (c-'0');
}

int main(){
    int k; cin >> k;
    vector<str> lunlun{"00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "21", "22", "23", "32", "33", "34",
    "43", "44", "45", "54", "55", "56", "65", "66", "67", "76", "77", "78", "87", "88", "89",
    "98", "99"};
    str tmp;
    vector<ll> all_lunlun;
    bool is_lunlun;
    int range = lunlun.size();
    int lunlun_count = 0;
    rep(i, range){
        if(lunlun_count > 100100) break;
        rep(j, range){
            rep(k, range){
                rep(l, range){
                    rep(m, range){
                        is_lunlun = true;
                        tmp = lunlun[i] + lunlun[j] + lunlun[k] + lunlun[l] + lunlun[m];
                        rep(o, tmp.size()-1){
                            if((abs(ctoi(tmp[o]) - ctoi(tmp[o+1])) > 1) && (tmp[o] != '0')){
                                is_lunlun = false;
                                break;
                            }
                        }
                        if(is_lunlun){
                            all_lunlun.push_back(stoll(tmp));
                            lunlun_count += 1;
                        }
                    }
                }
            }
        }
    }
    sort(all(all_lunlun));
    cout << all_lunlun[k] << endl;
    return 0;
}
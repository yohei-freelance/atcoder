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

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

int main(){
    int n; cin >> n;
    str s; cin >> s;
    int first_digit, second_digit, third_digit;
    bool first, second, third;
    int num = 0;
    int ans = 0;
    while(num <= 999){
        first_digit = num / 100;
        second_digit = (num - (first_digit * 100)) / 10;
        third_digit = num % 10;
        first = false;
        second = false;
        third = false;
        rep(j, n){
            char letter = ctoi(s[j]);
            if(first == false){
                if(letter == first_digit) first = true;
            }
            else if(first == true && second == false){
                if(letter == second_digit) second = true;
            }
            else if(first == true && second == true && third == false){
                if(letter == third_digit) third = true;
            }
            if(first == true && second == true && third == true){
                ans++;
                break;
            }
        }
        num++;
    }
    cout << ans << endl;
    return 0;
}
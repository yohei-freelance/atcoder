#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define REP(i, n) for(int i=0; i<n; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll mod = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

vector<int> primes(100001, 0);

void prime_make(){
    // 累積和
    primes[1] = 0;
    primes[2] = 0;
    primes[3] = 1;
    primes[4] = 0;
    primes[5] = 2;
    primes[6] = 0;
    bool is_prime_n;
    bool is_prime_plus1;
    for(int i=7; i<=100000; i+=2){
        int root = sqrt(i);
        is_prime_n = true;
        is_prime_plus1 = true;
        for(int j=2; j<=root; j++){
            if(i%j==0){
                is_prime_n = false;
                break;
            }
            if(((1+i)/2)%j==0){
                is_prime_plus1 = false;
                break;
            }
        }
        if(is_prime_n && is_prime_plus1){
            primes[i] = primes[i-2] + 1;
        }else{
            primes[i] = primes[i-2];
        }
    }
    for(int i=2; i<=100000; i+=2){
        primes[i] = primes[i-1];
    }
}

int main(){
    int q; cin >> q;
    prime_make();
    int l, r;
    REP(i, q){
        cin >> l >> r;
        cout << primes[r] - primes[l-1] << endl;
    }
    return 0;
}
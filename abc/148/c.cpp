#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

ll gcd(ll a, ll b){
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}

int main(){
    ll a, b; cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}
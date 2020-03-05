#include <bits/stdc++.h>
using namespace std;

int main(){
    // aとbの最大公約数と最小公倍数を出力
    int a, b; cin >> a >> b;
    cout << __gcd(a, b) << endl;
    cout << a / __gcd(a, b) * b << endl;
    return 0;
}
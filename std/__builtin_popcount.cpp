#include <bits/stdc++.h>
using namespace std;

int main(){
    // xを2進数表記したときに, 1であるビットの個数を出力
    long long x;
    cin >> x;
    cout << __builtin_popcountll(x) << endl;
    return 0;
}
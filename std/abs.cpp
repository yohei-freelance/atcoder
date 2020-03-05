#include <bits/stdc++.h>
using namespace std;

int main(){
    // 2つの小数a,bを入力し, a-bの絶対値を小数で出力
    // int型だけでなく, double型も用いることができる.
    double a, b; cin >> a >> b;
    printf("%.12lf\n", abs(a-b));
    return 0;
}
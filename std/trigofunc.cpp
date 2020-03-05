#include <bits/stdc++.h>
using namespace std;

int main(){
    // c++では弧度法を利用する.
    double pi = 3.141592653589793238;
    double x; cin >> x;
    printf("%.12lf\n", sin(x / 180.0 * pi));
    printf("%.12lf\n", cos(x / 180.0 * pi));
    printf("%.12lf\n", tan(x / 180.0 * pi));
    return 0;
}
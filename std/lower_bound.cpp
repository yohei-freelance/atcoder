#include <bits/stdc++.h>
using namespace std;

int main(){
    // a[i] < x となるようなiが何個あるのかをO(logN)で計算
    int N, a[100000];
    cin >> N;
    for (int i=0; i<N; i++) cin >> a[i];
    sort(a, a+N);

    int x;
    cin >> x;
    cout << lower_bound(a, a+N, x) - a << endl;
    return 0;
}
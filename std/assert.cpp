#include <bits/stdc++.h>
using namespace std;

int N, X, cnt, a[10009];

int main(){
    // a[i] + a[j] = Xを満たす(i, j) [i < j]の個数を列挙
    // N > 10000の場合TLEするのでランタイムエラーを起こすようにする
    cin >> N >> X;
    for(int i=1; i<=N; i++) cin >> a[i];
    assert(N <= 10000);
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            if (a[i] + a[j] == X) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
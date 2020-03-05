#include <bits/stdc++.h>
using namespace std;

int main(){
    // 103, 168, 103の中で最大値を出力
    cout << max({103, 168, 103}) << endl;

    // 複数の要素の最小値を出力する その1
    int N, c[100009], minx = 2147483647;
    cin >> N;
    for(int i=1; i<=N; i++) cin >> c[i];
    for (int i=1; i<=N; i++) minx = min(minx, c[i]);
    cout << minx << endl;

    // 複数の要素の最小値を出力する その2
    cout << *min_element(c + 1, c + N + 1) << endl;
    return 0;
}
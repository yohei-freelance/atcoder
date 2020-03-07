#include <bits/stdc++.h>
using namespace std;

int main(){
    // 配列aに含まれる1の個数, 2の個数を出力
    int a[10] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 1};
    cout << count(a, a+10, 1) << endl;
    cout << count(a, a+10, 2) << endl;

    // b[1], .., b[N]を受け取りその後Q個の質問を受け取る
    // 各質問に対し, b[l], .., b[r]の中でxが何個あるかを出力
    int b[1009], N, Q;
    cin >> N;
    for(int i=1; i<=N; i++) cin >> b[i];
    cin >> Q;
    for(int i=1; i<=Q; i++){
        int l, r, x;
        cin >> l >> r >> x;
        cout << count(b+l, b+r+1, x) << endl;
    }
    return 0;
}
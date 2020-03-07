#include <bits/stdc++.h>
using namespace std;

int main(){
    // a[1], .., a[N]を受け取る. Q個の質問を受け取る.
    // 各質問は(l, r, x)の組から成り, a[l], ..,a[r]の中でxが存在しない場合-1
    // そうでない場合, 存在する位置(ポインタではない)を出力する.
    int N, Q, a[1009];
    cin >> N;
    for(int i=1; i<=N; i++) cin >> a[i];
    cin >> Q;
    for(int i=1; i<=Q; i++){
        int l, r, x;
        cin >> l >> r >> x;
        int f = find(a+l, a+r+1, x) - a;
        if(f == r+1) cout << "-1" << endl; //存在しない場合
        else cout << f << endl;
    }
    return 0;
}
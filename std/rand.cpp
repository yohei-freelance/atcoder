#include <bits/stdc++.h>
using namespace std;

int main(){
    // main関数の冒頭につけると実行ごとに乱数生成結果が変わる
    srand((unsigned)time(NULL));

    // 1以上6以下のランダムな整数を出力
    cout << rand() % 6 + 1 << endl;

    // 例 2: 90% の確率で "Yay!"、10% の確率で ":(" と出力する
    if (rand() % 10 <= 8) cout << "Yay!" << endl;
    else cout << ":(" << endl;
    return 0;
}
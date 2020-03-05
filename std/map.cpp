#include <bits/stdc++.h>
using namespace std;

/*
// int 型の番地に int 型の変数を記録する場合（2^31 要素の int 型配列と同じような感じ）
map<int, int> M1;

// int 型の番地に string 型の変数を記録する場合（2^31 要素の string 型配列と同じような感じ）
map<int, string> M2;

// string 型の番地に double 型の変数を記録する場合
map<string, double> M3;
*/

int main(){
    map<string, int> Map;
    Map["qiita"] = 777;
    Map["algorithm"] = 1111;
    Map["competitive_programming"] = 1073741824;

    cout << Map["algorithm"] << endl; // 1111 と出力される
    cout << Map["tourist"] << endl; // まだ何も書き込まれていないので、0 と出力される
    return 0;
}
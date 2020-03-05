#include <bits/stdc++.h>
using namespace std;

int main(){
    // 入力した2つの文字列を連結し最初の10文字を出力
    string a, b;
    cin >> a >> b;
    string c = a + b;
    if(c.size() <= 10) cout << c << endl;
    else cout << c.substr(0, 10) << endl;

    // 入力した文字列sの偶数文字目を'z'に変えて出力
    string s; cin >> s;
    for(int i=0; i<s.size(); i+=2) s[i] = 'z';
    cout << s << endl;
    return 0;
}
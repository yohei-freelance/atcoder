#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
    int n; cin >> n;
    str s; cin >> s;
    char moji;
    char max = 'Z';
    for(int i=0; i<s.length(); i++){
        moji = s[i];
        moji += n;
        if(moji > 'Z'){
            moji -= 26;
        }
        cout << moji;
    }
    cout << "\n" << endl;
    return 0;
}
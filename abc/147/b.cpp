#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
 
int main(){
    str s; cin >> s;
    int ans = 0;
    for (int i=0; i<s.length()/2; i++){
        if(s[i] != s[s.length()-1-i]){
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}
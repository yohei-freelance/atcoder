#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
    int n, k; cin >> n >> k;
    str s; cin >> s;
    char tmp;
    for(int i=0; i<n; i++){
        if(i != k-1){
            printf("%c", s[i]);
        }else{
            if (('a' <= s[i]) && (s[i] <= 'z')){
                tmp = s[i] - 0x20;
            } else if (('A' <= s[i]) && (s[i] <= 'Z')){
                tmp = s[i] + 0x20;
            }
            printf("%c", tmp);
        }
    }
    return 0;
}
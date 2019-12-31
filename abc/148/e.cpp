#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
    ll n; cin >> n;
    ll ans;
    if (n%2 == 1){
        cout << 0 << endl;
        return 0;
    }else{
        bool conti = true;
        ll dividing_num = 10;
        while(conti){
            if(n / dividing_num != 0){
                ans += n / dividing_num;
                dividing_num = dividing_num * 5;
            }else{
                conti = false;
            }
        }
        cout << ans << endl;
        return 0;
    }
}
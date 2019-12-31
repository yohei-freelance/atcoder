#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

ll GetDigit(ll num){
    return log10(num)+1;
}

ll MoneyCalc(ll a, ll b, ll num){
    return a * num + b * GetDigit(num);
}

// 二分探索
int main(){
    ll a, b ,x; cin >> a >> b >> x;
    bool searching = true;
    ll lower, upper; lower = 0; upper = pow(10, 9);
    ll middle;
    while(upper - lower > 1){
        middle = (lower + upper) / 2;
        if(MoneyCalc(a, b, middle) > x){
            upper = middle;
        }else{
            lower = middle;
        }
    }
    if(MoneyCalc(a, b, upper) <= x){
        cout << upper << endl;
    }else{
        cout << lower << endl;
    }
    return 0;
}
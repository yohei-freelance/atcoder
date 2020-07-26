#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define rep(i, n) for(int i=0; i<n; ++i)
#define REP(i, n) for(int i=1; i<=n; ++i)
#define all(obj) (obj).begin(), (obj).end()
const int inf = 1e9;
const ll INF = 1e18;
const ll MOD = 1e9+7;
const ll MAX = 1e9+7;

unsigned GetDigit(unsigned num){
    unsigned digit=0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    return digit;
}

int main(){
    int n; cin >> n;
    unsigned long long multiply = 1;
    unsigned long long tmp;
    unsigned long long digit_all = 0;
    vector<unsigned long long> nums;
    rep(i, n){
        cin >> tmp;
        nums.push_back(tmp);
        digit_all += GetDigit(tmp)-1;
    }
    if(digit_all > 18){
        cout << -1 << endl;
    }else{
        rep(i, n){
            multiply *= nums[i];
        }
        if(multiply > 1000000000000000000) cout << -1 << endl;
        else cout << multiply << endl;
    }
    return 0;
}
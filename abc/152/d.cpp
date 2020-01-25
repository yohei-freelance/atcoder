#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

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
    ll ans = 0;
    if(n==1){
        cout << 1 << endl;
        return 0;
    }
    int full_digit = GetDigit(n);
    int former_digit, latter_digit; former_digit = n/GetDigit(n); latter_digit = n%10;
    for(int i=1; i<10; i++){
        for(int j=1; j<10; j++){
            ll left = 0;
            ll right = 0;
            for(int digit=0; digit<=GetDigit(n); digit++){
                if(digit != full_digit){
                    ll left += (digit-1)*9;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
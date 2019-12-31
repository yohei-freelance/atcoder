#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
    int n, k; cin >> n >> k;
    double ans; ans = 0;
    double tmp_ans;
    int tmp;
    for(int i=1; i<=n; i++){
        tmp_ans = 1/(double)n;
        tmp = i;
        while(tmp < k){
            tmp *= 2;
            tmp_ans /= 2;
        }
        ans += tmp_ans;
    }
    cout << setprecision(15) << ans << endl;
    return 0;
}
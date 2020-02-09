#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;
const ll mod = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n, k; cin >> n >> k;
    vector<int> p(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> p[i];
        if(i<k){
            sum += p[i];
        }
    }
    int tmp_sum = sum;
    int memo = 0;
    if(k<n){
        for(int i=0; i<n-k; i++){
        tmp_sum = tmp_sum - p[i] + p[i+k];
            if(tmp_sum >= sum){
                sum = tmp_sum;
                memo = i+1;
            }
        }
    }
    double ans = 0;
    for(int i=memo; i<memo+k; i++){
        ans += (double)(p[i]+1)/2.0;
    }
    cout << setprecision(15) << ans << endl;
}
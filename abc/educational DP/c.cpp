#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const int inf =1e9;
const int minus_inf = -1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n; cin >> n;
    vector<int> dp_A(n+1, inf);
    vector<int> dp_B(n+1, inf);
    vector<int> dp_C(n+1, inf);
    dp_A[0] = 0;
    dp_B[0] = 0;
    dp_C[0] = 0;
    int a, b, c;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        dp_A[i+1] = max(dp_B[i]+b, dp_C[i]+c);
        dp_B[i+1] = max(dp_A[i]+a, dp_C[i]+c);
        dp_C[i+1] = max(dp_A[i]+a, dp_B[i]+b);
    }
    cout << max(dp_A[n], max(dp_B[n], dp_C[n])) << endl; 
}
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

int main(){
    // O(n)は5*10^3なので, O(n^2)までイケる.
    int n; cin >> n;
    str s; cin >> s;
    int tmp_ans, ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+ans+1; j<n; j++){
            tmp_ans = 0;
            if(s[i] == s[j]){
                for(int k=0; k<j-i; k++){
                    if(s[i+k] == s[j+k]){
                        tmp_ans += 1;
                    }else{
                        break;
                    }
                }
                ans = max(tmp_ans, ans);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
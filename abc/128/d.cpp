#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const ll inf =1e9;
const int minus_inf = -1e9;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n, k; cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> que;
    vector<int> v(n);
    vector<int> v_rev(n);
    int ans = minus_inf;
    int tmp_ans = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        cin >> v_rev[n-i-1];
    }
    for(int f=1; f<=k; f++){
        // 左からl個, 右からr個をpqへ. l個を固定する.
        for(int l=0; l<=f; l++){
            if(l != 0){
                for(int le=0; le<l; le++){
                    que.push(v[le]);
                }
            }
            if(f-l != 0){
                for(int r=0; r<f-l; r++){
                    que.push(v_rev[r]);
                }
            }
            for(int d=0; d<k-f; d++){
                if(que.top() < 0){
                    cout << que.top();
                    que.pop();
                }else{
                    break;
                }
            }
            cout << que.size() << endl;
            while(!que.empty()){
                tmp_ans += que.top();
                que.pop();
            }
            ans = max(ans, tmp_ans);
            tmp_ans = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
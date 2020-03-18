#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
using P = pair<int, int>;
const int inf = 1e9;
const int MAX = 1e5+5;
const ll MOD = 1e9+7;
#define REP(i, n) for (int i = 0; i < (n); ++i)

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

int main(){
    int n, k; cin >> n >> k;
    deque<int> dq;
    priority_queue<int, vector<int>, greater<int>> pq;
    int value;
    REP(i, n){
        cin >> value;
        dq.push_back(value);
    }
    int ans = 0;
    int execute_num = min(n,k);
    for(int i=0; i<=execute_num; i++){
        for(int j=0; j<=execute_num-i; j++){
            deque<int> dq_copy = dq;
            priority_queue<int, vector<int>, greater<int>> pq;
            for(int l=0; l<i; l++){
                pq.push(dq_copy.front());
                dq_copy.pop_front();
            }
            for(int l=0; l<j; l++){
                pq.push(dq_copy.back());
                dq_copy.pop_back();
            }
            for(int l=0; l<k-i-j; l++){
                if(!pq.empty()){
                    value = pq.top();
                    if(value < 0) pq.pop();
                }
            }
            int tmp_ans = 0;
            while(!pq.empty()){
                tmp_ans += pq.top();
                pq.pop();
            }
            ans = max(ans, tmp_ans);
        }
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
#define REP(i, n) for(int i=0; i<n; ++i)
#define ALL(obj) (obj).begin(), (obj).end()
using P = pair<int, int>;
const int inf = 1e9;
const ll INF = 1e18;
const ll mod = 1e9+7;

struct edge{
    int to;
    int cost;
};
using graph = vector<vector<edge>>;

vector<char> S(500001);

int main(){
    bool from_front = true;
    str s; cin >> s;
    int q; cin >> q;
    int t, f;
    char c;
    stack<char> from_front_stack;
    stack<char> from_back_stack;
    queue<char> from_front_queue;
    queue<char> from_back_queue;
    REP(i, q){
        cin >> t;
        if(t == 1){
            from_front = !from_front;
        }else{
            cin >> f >> c;
            if((from_front && f == 1) || (!from_front && f == 2)){
                from_front_stack.push(c);
                from_back_queue.push(c);
            }else{
                from_back_stack.push(c);
                from_front_queue.push(c);
            }
        }
    }
    if(from_front){
        while(!from_front_stack.empty()){
            cout << from_front_stack.top();
            from_front_stack.pop();
        }
        cout << s;
        while(!from_front_queue.empty()){
            cout << from_front_queue.front();
            from_front_queue.pop();
        }
    }else{
        while(!from_back_stack.empty()){
            cout << from_back_stack.top();
            from_back_stack.pop();
        }
        for(int i=s.size()-1; i>=0; i--){
            cout << s[i];
        }
        while(!from_back_queue.empty()){
            cout << from_back_queue.front();
            from_back_queue.pop();
        }
    }
    cout << endl;
    return 0;
}
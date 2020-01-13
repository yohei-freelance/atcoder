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

int facc(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main(){
    int n; cin >> n;
    vector<int> p(n), q(n), r(n), s(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
        r[i] = p[i];
    }
    for(int i=0; i<n; i++){
        cin >> q[i];
        s[i] = q[i];
    }
    sort(r.begin(), r.end());
    sort(s.begin(), s.end());
    int ans1 = 1, ans2 = 1;
    int final_ans1, final_ans2;
    do {
        for(int i=0; i<r.size(); i++) 
        if(p[i] != r[i]){
            ans1 += 1;
            break;
        }else if((i == r.size()-1) && (r[i] == p[i])){
            final_ans1 = ans1;
        }
    } while( next_permutation(r.begin(), r.end()));
    do {
        for(int i=0; i<s.size(); i++) 
        if(q[i] != s[i]){
            ans2 += 1;
            break;
        }else if((i == s.size()-1) && (s[i] == q[i])){
            final_ans2 = ans2;
        }
    } while( next_permutation(s.begin(), s.end()));
    cout << abs(final_ans1 - final_ans2) << endl;
    return 0;
}
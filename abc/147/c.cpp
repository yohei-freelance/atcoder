#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

// bit全探索
void main(){
    int n; cin >> n;
    vector<int> a(n);

    for(int bit=0; bit < (1<<n); bit++){
        for(int i=0; i<n; i++){
            a[i] = -1;
        }
        
    }
    
}
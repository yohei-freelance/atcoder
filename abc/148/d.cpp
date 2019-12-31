#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    int tmp = 1;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        if (a[i] == tmp){
            tmp += 1;
        }
    }
    if (tmp == 1){
        cout << -1 << endl;
        return 0;
    }
    else{
        cout << n - tmp + 1 << endl;
        return 0;
    }
}
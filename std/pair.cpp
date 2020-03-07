#include <bits/stdc++.h>
using namespace std;

int N;
pair<int, string> a[100000];

int main(){
    // N人の成績と名前を入力して, 成績の大きい順にソートする.
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a[i].second;
        cin >> a[i].first;
    }
    sort(a, a+N, greater<pair<int, string>>());
    for(int i=0; i<N; i++){
        cout << "Name = " << a[i].second << ", Score = " << a[i].first << endl;
    }
    return 0;
}
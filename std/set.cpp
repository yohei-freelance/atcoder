#include <bits/stdc++.h>
using namespace std;

int main(){
    // setに対して色々な操作を行う
    // 1個目は"End", 2個目は"46"と出力される
    set<int> Set;
    Set.insert(37);
    Set.insert(15);
    Set.insert(37);
    auto itr1 = Set.lower_bound(40);
    if (itr1 == Set.end()) cout << "End" << endl;
    else cout << (*itr1) << endl;
    Set.erase(37);
    Set.insert(46);
    auto itr2 = Set.lower_bound(20);
    if (itr2 == Set.end()) cout << "End" << endl;
    else cout << (*itr2) << endl;
    
    // a[1], a[2], .., a[N]を小さい順に出力
    // (同じ要素がある場合は1回だけ出力)
    set<int> b; int N, a[100000];
    cin >> N;
    for(int i=1; i<=N; i++) cin >> a[i];
    for(int i=1; i<=N; i++) b.insert(a[i]);
    auto itr = b.begin();
    while(itr != b.end()){
        cout << (*itr) << endl;
        itr++;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

bool IsPrime(int num){
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く
    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0){
            return false;
        }
    }
    // 素数である
    return true;
}

int main(){
    int x; cin >> x;
    bool searched = false;
    while(!searched){
        searched = IsPrime(x);
        if(!searched){
            x += 1;
        }
    }
    cout << x << endl;
    return 0;
}
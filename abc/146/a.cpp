#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
    str s; cin >> s;
    if(s == "SUN"){
        cout << 7 << endl;
    }else if(s == "SAT"){
        cout << 1 << endl;
    }else if(s == "FRI"){
        cout << 2 << endl;
    }else if(s == "THU"){
        cout << 3 << endl;
    }else if(s == "WED"){
        cout << 4 << endl;
    }else if(s == "TUE"){
        cout << 5 << endl;
    }else if(s == "MON"){
        cout << 6 << endl;
    }
    return 0;
}
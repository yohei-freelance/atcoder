#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;

int main(){
    str s; cin >> s;
    istringstream ss1;
    ss1 = istringstream(s.substr(0, 2));
    int early, later;
    ss1 >> early;
    ss1 = istringstream(s.substr(2, 2));
    ss1 >> later;
    bool early_year = false, later_year = false;
    if((early <= 12) && (1 <= early)){
        early_year = true;
    }
    if((later <= 12) && (1 <= later)){
        later_year = true;
    }
    if(early_year && later_year){
        cout << "AMBIGUOUS" << endl;
        return 0;
    }
    if(early_year){
        cout << "MMYY" << endl;
        return 0;
    }
    if(later_year){
        cout << "YYMM" << endl;
        return 0;
    }
    cout << "NA" << endl;
    return 0;
}
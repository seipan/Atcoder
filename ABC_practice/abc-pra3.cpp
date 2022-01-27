#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    for(int i=0;i<10;i++){
        t = t + "oxx" ;
    }
    bool flag = false;
    cin >> s;
    int N = s.length();
    for(int i=0;i<30;i++){
        if(s == t.substr(i,N)) flag = true;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

}
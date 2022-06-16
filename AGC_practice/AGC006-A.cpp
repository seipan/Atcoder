#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;cin >> N;
    string s,t;cin >> s >> t;

    int count = 0;

    for(int i=1;i<=N;i++){
        if (s.substr(n - i) == t.substr(0, i)) {
            count = i;
        }
    }


    cout << (N*2)-count << endl;



}
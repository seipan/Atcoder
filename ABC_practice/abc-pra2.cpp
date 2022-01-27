#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s;
    cin >> t;
    int N = s.length();

    for(int i=0;i<26;i++){
        if(s==t) {
            cout << "Yes" << endl;
            return 0;
        }
        else {
            for(int j=0;j<N;j++){
                if(s[i] == 'z') s[i] = 'a';
                else s[j]++;
            }
        }
    }
    cout << "No" << endl;

}
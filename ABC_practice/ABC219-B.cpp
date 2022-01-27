#include <bits/stdc++.h>
using namespace std;

int main(){
    string T;
    string U;
    vector<string> S(3);
    for(int i=0;i<3;i++) cin >> S[i];
    cin >> T;

    for(int i=0;i<T.length();i++){
        int t = T[i]- '1';
        U += S[t];
    }

    cout << U << endl;

}
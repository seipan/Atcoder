#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,T,U;
    cin >> S >> T;

    int N = S.size();

    if(S == T){
        cout << "Yes" << endl;
        return 0;
    }
    else {
        for(int i=0;i<N-1;i++){
            U = S.substr(0,i) + S[i+1] + S[i] + S.substr(i+2,N-2-i);
            if(U == T){
                cout << "Yes" << endl;
                return 0;
            }
            
        }

    }

    cout << "No" << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    string T,U,V;
    cin >> S;

    U = 'z';
    V = 'a';

    int N = S.length();
    for(int i=1;i<N;i++){
        U = U +'z';
    }

    for(int i=1;i<N;i++){
        V = V +'a';
    }

    for(int k=0;k<N;k++){
        for(int i=0;i<N;i++){
            if(i+k>N-1) {
                int t=k-(N-1)-1;
                T[t] = S[i];
            }
            else{
                T[i+k] = S[i];
            }
        }
        if(T>V){
            V =T;
        }
        else if(T<U) {
            U = T;
        }
    }

    cout << U << endl;
    cout << V << endl;

}
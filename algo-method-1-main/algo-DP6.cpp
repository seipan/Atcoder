#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<string> S(N);
    for(int i=0;i<N;i++) cin >> S[i];

    int A[17][17] = {};
    int T[17][17];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(S[i].at(j) != #) A[i][j] = 1;
        }
    }

    T[0][0] = 1;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i][j-1] == 1 && A[i-1][j] == 1)T[i][j] = T[i][j-1] + T[i-1][j];
            else if(A[i][j-1] == 1) T[i][j] = T[i][j-1];
            else if(A[i-1][j] == 1) T[i][j] = T[i-1][j];
        }
    }    
}
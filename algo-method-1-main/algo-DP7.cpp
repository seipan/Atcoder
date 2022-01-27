#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[110][110];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> A[i][j];
        }
    }

    int B[110][110];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            B[i][j] = 1;
        }
    }

    int T[110][110];
    T[0][0] = A[0][0];

     for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(B[i][j-1] == 1 && B[i-1][j] == 1)T[i][j] = min (T[i][j-1] , T[i-1][j]) + A[i][j];
            else if(B[i][j-1] == 1) T[i][j] = T[i][j-1] + A[i][j];
            else if(B[i-1][j] == 1) T[i][j] = T[i-1][j] + A[i][j];
        }
    }    


}
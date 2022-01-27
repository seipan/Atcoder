#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[110][110] = {};

    for(int i=0;i<N;i++) cin >> A[0][i];

    for(int i=1;i<N;i++){
        for(int j=0;j<N;j++){
            A[i][j] += A[i-1][j];
            if(j-1 >= 0) A[i][j] += A[i-1][j-1];
            if(j+1<N) A[i][j] += A[i-1][j+1];
        }
    }

    cout << A[N-1][N-1] << endl;  
}
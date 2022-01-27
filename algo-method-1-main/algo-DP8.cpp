#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int A[110];
    for(int i=0;i<N-1;i++) cin >> A[i];

    int B[110][110];

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            B[i][j] = 1;
        }
    }
    
    int T[110][110];
    T[0][0] = 1;

    for(int i=0;i<N;i++){
        for(j=0;j<M;j++){
            if(T[i][j]  == 1){
                if(B[i+1][j] == 1) T[i+1][j] = 1;
                if(B[i+1][j+A[i]] == 1) T[i+1][j+A[i]] = 1;
            }
        }
    }

    int count = 0;

    for(int j=0;j<M;j++){
        if(T[N-1][j] == 1) count++;
    }

    cout << count << endl;
}
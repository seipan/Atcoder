#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    vector<int> A(N), B(N);

    for (int i = 0; i < N-1; ++i) cin >> A[i];
    for (int i = 0; i < N-1; ++i) cin >> B[i];

    vector<vector<int>> T(N, vector<int>(M, -1));

    T[0][0] = 0;

    for(int i=0;i<N-1;i++){
        for(int j=0;j<M;j++){
            if(T[i][j] >= 0){
                dp[i+1][j] = max(T[i+1][j], T[i][j]);
                 if (j+A[i] < M) {
                    T[i+1][j+A[i]] = max(T[i+1][j+A[i]], T[i][j] + B[i]);
                }
            }
        }
    }

    cout << T[N-1][M-1] << endl;
}
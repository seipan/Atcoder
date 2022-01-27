#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    vector<int> W(N), V(N);

    for (int i = 0; i < N; ++i) cin >> W[i];
    for (int i = 0; i < N; ++i) cin >> V[i];

    
    vector<vector<int>> T(N+1, vector<int>(M+1, -1));

    T[0][0] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<=M;j++){
            if(T[i][j] >= 0){
                T[i+1][j] = max(T[i+1][j], T[i][j]);
                 if (j+A[i] <= M) {
                    T[i+1][j+W[i]] = max(T[i+1][j+W[i]], T[i][j] + V[i]);
                }
            }
        }
    }

    int res = -1;

    for (int j = 0; j <= M; ++j) res = max(res, T[N][j]);

    cout << res << endl;
}

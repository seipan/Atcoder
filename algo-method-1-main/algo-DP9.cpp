#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int W[110];
    for(int i=0;i<N;i++) cin >> W[i];

    vector<vector<int>> T(N+1, vector<int>(M+1))
    T[0][0] = 1;

    for(int i=0;i<N;i++){
        for(int j=0;j<=M;j++){
            if(T[i][j] == 1){
                T[i+1][j] = 1;
                if(j+W[i] < M+1) T[i+1][j+W[i]] = 1;
            }
        }
    }

    if(T[N-1][M] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}
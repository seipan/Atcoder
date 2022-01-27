#include <bits/stdc++.h>
using namespace std;
const int INF = 100000;

int main(){
    int N,M;
    cin >> N >> M;
    int W[110];
    long long sum = 0;
    for(int i=0;i<N;i++){
        cin >> W[i];
        sum += W[i];
    }
    vector<vector<int>> T(N+1, vector<int>(M+1, INF));
    T[0][0] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(T[i][j] != INF){
                T[i+1][j] = min(T[i+1][j] , T[i][j]);
                T[i+1][j+W[i]] = min(T[i+1][j+W[i]] , T[i][j]+1)
            }
        }
    } 
    if (dp[N][M] != INF) cout << T[N][M] << endl;
    else cout << -1 << endl;

}
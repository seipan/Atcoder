#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<29;

int main(){
    int N,M;
    cin >> N >> M;
    int A[110];
    for(int i=0;i<N;i++) cin >> A[i];

    vector<vector<int>> dp(N+1, vector<int>(M + 1 , -11110));
    dp[0][0] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<=M;j++){
            dp[i+1][j] = min(dp[i][j] , dp[i+1][j]);
            if(j+A[i] <=M) dp[i+1][j+A[i]] = min(dp[i+1][j+A[i]] , dp[i][j] + 1);
       }
    }  

    if (dp[N][M] < INF) cout << dp[N][M] << endl; 
    else cout << -1 << endl; 
}
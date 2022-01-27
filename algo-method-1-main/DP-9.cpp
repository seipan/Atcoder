#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<29;

int main(){
    int N,M,K;
    cin >> N >> M >> K;
    int A[510];
    for(int i=0;i<N;i++) cin >> A[i];

    vector<vector<int>> dp(N+1, vector<int>(M + 1 , INF));
    dp[0][0] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<=M;j++){ 
            if(dp[i][j] < = K)dp[i+1][j] = min(dp[i][j] , dp[i+1][j]);
            if(j+A[i] <=M && dp[i][j]+1 <= K) dp[i+1][j+A[i]] = min(dp[i+1][j+A[i]] , dp[i][j] + 1);
       }
    }

     if (dp[N][M] < INF) cout << "Yes" << endl;
     else cout << "No" << endl;
}
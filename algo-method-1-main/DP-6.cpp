#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int A[110];
    for(int i=0;i<N;i++) cin >> A[i];

    vector<vector<bool>> dp(N+1, vector<bool>(M + 1 , false));
    dp[0][0] = true;
    int count = 0;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<=M;j++){
            if(dp[i][j]){
                dp[i+1][j] = true;
                if(j+A[i] <= M){
                    dp[i+1][j+A[i]] = true;
                }
                if(dp[N][M]){
                    count ++;
                    dp[N][M] = false;
                }
            }
        }
    }

    if(dp[N][M]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
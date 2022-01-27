#include <bits/stdc++.h>
using namespace std;
const int INF = 1<<29;

int main(){
    int N, M;
    int A[510], B[510];
    cin >> N >> M;
    for (int i = 0; i < N; ++i) cin >> A[i] >> B[i];

    vector<vector<int>> dp(N+1, vector<int>(M + 1 , INF));
    dp[0][0] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if (dp[i][j] < INF) dp[i+1][j] = 0;
                if(j-A[i] > = 0){
                    if (dp[i][j-A[i]] < INF) {
                        dp[i+1][j] = min(dp[i+1][j], 1);
                    }
                    

                }
            }
        }
    }
}
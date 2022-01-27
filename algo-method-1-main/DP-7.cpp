#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int A[110];
    for(int i=0;i<N;i++) cin >> A[i];

    vector<vector<int>> dp(N+1, vector<int>(M + 1 , 0));
    dp[0][0] = 1;

    for(int i=1;i<=N;i++){
        for(int j=0;j<=M;j++){
            (dp[i][j] +=dp[i-1][j]) %= 1000;
			if(j-A[i-1] >= 0) (dp[i][j] +=dp[i-1][j-A[i-1]]) %= 1000;
        }
    }

    cout << dp[N][M] << endl;
}
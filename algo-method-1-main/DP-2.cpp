#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,W;
    cin >> N >> W;
    int w[110],V[110];
    for(int i=0;i<N;i++) cin >> w[i] >> V[i];

    vector<vector<int>> dp(N+1, vector<int>(W + 1 , -1000)); //縦個数、横重さで実装
    dp[0][0] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            if(dp[i][j] >= 0){ 
                dp[i+1][j] = max(dp[i][j],dp[i+1][j]); //何も選ばない場合はそのまま
                if(j+w[i] <= W){
                    dp[i+1][j+w[i]] = max(dp[i+1][j+w[i]] , dp[i][j] + V[i]); //i個目の重さ分増えた場所の価値は、もともとそこにあった価値と、dp[i][j]に価値を足したものの最大値 
                }
            }
        }
    }

    int res = -111110;

    for(int j=0;j<=W;j++){
        if(dp[N][j] > res) res = dp[N][j]; //N個目選んだ時の様々な重さでの最大値が答え
    }

    cout << res << endl;


}
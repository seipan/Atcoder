#include<bits/stdc++.h>
using namespace std;

long long dp[110][110000] = {-1};

int main(){
    int N,W;cin >> N >> W;
    vector<int> w(N);
    vector<int> v(N);
    for(int i=0;i<N;i++) cin >> w[i] >> v[i];

    dp[0][0] = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            if(dp[i][j]>=0){
                dp[i+1][j] = max(dp[i][j],dp[i+1][j]);
                //dp[i+1][j] = dp[i][j];
                if(j+w[i]<=W){
                    dp[i+1][j+w[i]] = max(dp[i][j]+v[i],dp[i+1][j+w[i]]);
                }  
            }
        }
    }

    long long ans = -1;

    for(int i=0;i<=W;i++){
        ans = max(ans,dp[N][i]);
    }

    cout << ans << endl;


}
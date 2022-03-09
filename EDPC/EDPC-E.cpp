#include<bits/stdc++.h>
using namespace std;
const int inf = INT_MAX;

long long dp[110][201010];

int main(){
    int N,W;cin >> N >> W;
    vector<int> w(N);
    vector<int> v(N);
    for(int i=0;i<N;i++) cin >> w[i] >> v[i];

    for(int i=0;i<=N;i++){
        for(int j=0;j<=N*1010;j++){
            dp[i][j] = inf;
        }
    }

    dp[0][0] = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N*1010+1;j++){
            if(dp[i][j]<inf){
                dp[i+1][j] = min(dp[i+1][j],dp[i][j]);
                dp[i+1][j+v[i]] = min(dp[i+1][j+v[i]],dp[i][j]+w[i]);
            }
        }
    }

    int ans = 0;
    for(int i=0;i<N*1010+1;i++){
        if(dp[N][i]<=W) ans = max(ans,i);
    }

    cout << ans << endl;
}
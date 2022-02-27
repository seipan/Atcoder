#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N,M;cin >> N >> M;
    vector<long long> T(N+1,0);
    for(int i=1;i<=M;i++){
        int b;cin >> b;
        T[b] = 1;
    }
    vector<long long> dp(N+1);
    dp[0]=1;
    if(T[1] == 0) dp[1] = 1;
    else dp[1] = 0;

    for(int i=2;i<=N;i++){
        if(T[i] == 1) dp[i] = 0;
        else{
            dp[i] = dp[i-1] + dp[i-2];
            dp[i] %= 1000000007;
        }
    }

    cout << dp[N]<< endl;
}
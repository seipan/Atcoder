#include<bits/stdc++.h>
using namespace std;


int main(){
    int N,K;cin >> N >> K;
    vector<int> h(N);
    for(int i=0;i<N;i++) cin >> h[i];

    vector<int> dp(N);
    dp[0] = 0;
    for(int i=1;i<N;i++){
        int ans = 1111100000;
        for(int j=1;j<=min(K,i);j++){
            int a = dp[i-j] + abs(h[i]-h[i-j]);
            ans = min(a,ans);
        }
        dp[i] = ans;
    }

    cout << dp[N-1] << endl;
}
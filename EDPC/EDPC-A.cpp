#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> h(N);
    for(int i=0;i<N;i++) cin >> h[i];

    vector<int> dp(N);
    do[0] = 0;
    dp[1] = abs(h[1]-h[0]);

    for(int i=2;i<N;i++){
        int a = dp[i-1] + abs(h[i]-h[i-1]);
        int b = dp[i-2] + abs(h[i]-h[i-2]);
        dp[i] = min(a,b);
    }

    cout << dp[N] << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int D[30];
    for(int i=0;i<M;i++) cin >> D[i];

    vector<bool> dp(N + 1, false);

    dp[0] = true;

    for(int i=1;i<=N;i++){
        for(int j=0;j<M;j++){
            if(i-D[j] >= 0 && dp[i - D[j]]){
                dp[i] = true;
            }
        }

    }

    cout << (dp[N] ? "Yes" : "No") << endl;

}
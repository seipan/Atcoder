#include <bits/stdc++.h>
using namespace std;
const int inf = INT_MAX / 2;

int main(){
    int N;cin >> N;
    vector<int> S(N);
    for(int i=0;i<N;i++) cin >> S[i];
    int M = N*100;
    vector<vector<bool>> dp(N+1, vector<bool>(M+1, false));

    dp[0][0] = true;

    for(int i=0;i<N;i++){
        for(int j=0;j<=M;j++){
            if(!dp[i][j]) continue;
            dp[i+1][j] = true;
            dp[i+1][j+S[i]] = true; 
            //cout << i << " " << j << endl;
        }
    }

    for(int i=M;i>=0;i--){
        if(i%10 != 0 && dp[N][i]){
            cout << i << endl;
            return 0;
        }   
    }

    cout << 0 << endl;


}
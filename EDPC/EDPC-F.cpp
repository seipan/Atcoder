#include<bits/stdc++.h>
using namespace std;

int dp[3010][3010];


int main(){
    string S,T;
    cin >> S >> T;
    int N = S.size();
    int W = T.size();

    memset(dp, 0, sizeof(dp)); 

    for(int i=1;i<=N;i++){
        for(int j=1;j<=W;j++){
            if (S[i-1] == T[j-1]) dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
            dp[i][j] = max(dp[i][j], dp[i][j-1]);
            dp[i][j] = max(dp[i][j], dp[i-1][j]); 
        }
    }

    int len=dp[N][W];
    int i=N;
    int j=W;

    string ans;
    
    while(len>0){
        if(dp[i-1][j] == len){
            i--;
        }
        else if(dp[i][j-1] == len){
            j--;
        }
        else{
            ans.push_back(S[i-1]);
            i--;
            j--;
            len--;
        }
    }




    reverse(ans.begin(), ans.end());

    for (auto ci : ans) {
        cout << ci;
    }
}
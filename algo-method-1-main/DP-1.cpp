#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[11000];

    int sum = 0;

    for(int i=0;i<N;i++){
        cin >> A[i];
        sum += A[i];
    }
    vector<vector<bool>> dp(N+1, vector<bool>(sum*2 + 1 , false));
    dp[0][0] = true;

    for(int i=0;i<N;i++){
        for(int j=0;j<=sum;j++){
            if(dp[i][j]){
                dp[i+1][j] = true;
                if(i+j <= sum && i+j >= -sum){
                    dp[i+1][j+A[i]] = true;
                }  
            }
        }
    }
    int P;
    for(int j=sum;j>=-sum;j--){
        if(T[N][j]){
            P = j;
            break;
        }
    }

    cout << P << endl;


}
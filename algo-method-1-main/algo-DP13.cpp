#include <bits/stdc++.h>
using namespace std;
const int INF = -110000;

int main(){
    int N, A, B;
    cin >> N >> A >> B;

    int X[110];
    long long sum = 0;
    for(int i=0;i<N;i++){
        cin >> X[i];
        sum += X[i];
    }

    vector<vector<int>> T(N+1, vector<int>(sum+1,INF));
    T[0][0] = 0;
    
    for(int i=0;i<N;i++){
        for(long long j=0;j<=sum;j++){
            if(T[i][j] >= 0){ 
                T[i+1][j] = T[i][j];
                if(j+W[i] <= sum){
                    T[i+1][j+W[i]] = T[i][j] + W[i];
                }
            }
        }
    }

    for(long long j=0;j<=sum;j++){
        if(T[N][j] >= 0 && T[N][j] % A == B) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
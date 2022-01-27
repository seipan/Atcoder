#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int W[110];

    int sum = 0;

    for(int i=0;i<N;i++){
         cin >> W[i];
         sum += W[i];
    }

    vector<vector<bool>> T(N+1, vector<bool>(sum+1, false));
    T[0][0] = true;

    for(int i=0;i<N;i++){
        for(int j=0;j<=sum;j++){
            if(T[i][j]){
                T[i+1][j+W[i]] = true;
                T[i+1][abs(j-W[i])] = true;
            }
        }
    } 

    int res = 0;

    while(!T[N][res]){
        res++;
    }

    cout << res << endl;

}
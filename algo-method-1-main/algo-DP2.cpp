#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[4][4];
    for(int i=0;i<4;i++) cin >> A[0][i];

    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            A[i][j] = A[i-1][j-1] + A[i-1][j] + A[i-1][j+1];
        }
    }

    cout << A[3][3] << endl;

}
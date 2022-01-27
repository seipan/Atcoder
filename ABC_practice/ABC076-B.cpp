#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> A(N+1);
    A[0] = 1;
    for(int i=0;i<N;i++){
        A[i+1] = min(A[i]*2,A[i]+K);
    }
    cout << A[N] << endl;
}
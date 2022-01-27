#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,X;cin >> N >> X;
    vector<int> A(N);
    for(int i=1;i<N;i++) cin >> A[i];

    int res = 0;
    while(X!=0){
        res++;
        X = A[X];
    }

    cout << res << endl;

}
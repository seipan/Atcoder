#include <bits/stdc++.h>
using namespace std;

int main(){
    int K,N;cin >> K >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    int max1 = -1;

    for(int i=0;i<N-1;i++){
        int a = A[i+1] - A[i];
        max1 = max(a,max1);
    }
    int b = K - A[N-1];
    int c = b + A[0];
    max1 = max(c,max1);

    cout << K - max1 << endl;
}
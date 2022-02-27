#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;cin >> N >> K;
    vector<int> B(N);
    vector<int> A(N);
    for(int i=0;i<N;i++){
        int a,b,c;cin >> a >> b >> c;
        A[i]=a+b+c;
        B[i]=A[i];
    }
    sort(A.begin(),A.end(),greater<int>());
    int M = A[K-1];
    for(int i=0;i<N;i++){
        if(B[i]+300 >= M) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}
    

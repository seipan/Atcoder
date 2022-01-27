#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K;cin >> N >> K;
    vector<long long> A(N);
    for(int i=0;i<N;i++) cin >> A[i];

    sort(A.begin(),A.end());
    long long ans = 1111111111111111111111111111;
    int i = 0;
    
    for(int i=0;i<N;i++){
        if(i+K>N) break;
        long long a = abs(A[i] - A[i+(K-1)]);
        ans = min(ans,a);
    }

    cout << ans << endl;
}
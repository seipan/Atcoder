#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N),B(N),C(N);
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) cin >> B[i];
    for(int i=0;i<N;i++) cin >> C[i];
    map<int,int> mp;
    for(int i=0;i<N;i++){
        //cout << B[C[i]] << endl;
        mp[B[C[i]-1]]++;
    }

    long long ans = 0;

    for(int i=0;i<N;i++){
        ans += mp[A[i]];
        //cout << mp[A[i]] << " " << ans << endl;
    }

    cout << ans << endl;

}
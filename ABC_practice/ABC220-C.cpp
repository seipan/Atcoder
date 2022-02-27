#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N);
    long long sum = 0;
    for(int i=0;i<N;i++){
        cin >> A[i];
        sum += A[i];
    }
    long long X;cin >> X;
    long long b = X/sum;
    long long ans = b*N;
    long long nokori = X%sum;

    for(int i=0;i<N;i++){
        nokori -= A[i];
        ans++;
        if(nokori < 0) break;
    }

    cout << ans << endl;

}
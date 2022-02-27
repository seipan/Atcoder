#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<long long> S(N);
    vector<long long> T(N);
    for(int i=0;i<N;i++) cin >> S[i];
    for(int i=0;i<N;i++) cin >> T[i];

    vector<long long> ans(N);
    ans[0] = T[0];

    for(int i=1;i<N*2;i++){
        ans[i%N] = min(T[i%N],ans[(i-1)%N]+S[(i-1)%N]);
    }

    for(int i=0;i<N;i++) cout << ans[i] << endl;
}
#include<bits/stdc++.h>
using namespace std;
const long long INF = 1000000007;

int main(){
    int N;cin >> N;
    vector<int> C(N);
    for(int i=0;i<N;i++) cin >> C[i];
    sort(C.begin(),C.end());
    long long ans = 1;

    for(int i=0;i<N;i++){
        ans *= (C[i] - i);
        ans %= INF;
    }

    cout << ans << endl;
}
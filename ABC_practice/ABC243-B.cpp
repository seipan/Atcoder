#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<N;i++) cin >> B[i];

    int res = 0;
    for(int i=0;i<N;i++){
        if(A[i]==B[i]) res++;
    }

    cout << res << endl;

    int ans = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j) continue;
            if(A[i] == B[j]) ans++;
        }
    }
    cout << ans << endl;

}
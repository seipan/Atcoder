#include <bits/stdc++.h>
using namespace std;

#define INF 2000000000

int main(){
    int N;cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];

    int ans = INF;

    for(int bit=0;bit < 1 << (N-1);bit++){
        int xorr = 0;
        int orr = 0;
        for(int j=0;j<=N;j++){
            if(j<N) orr |= A[j];
            if(j==N || (bit >> j & 1)) xorr ^=  orr, orr = 0;
        }

        ans = min(ans,xorr);
    }

    cout << ans << endl;
}
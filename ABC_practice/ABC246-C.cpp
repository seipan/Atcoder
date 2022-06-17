#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K,X; cin >> N >> K >> X;
    vector<int> A(N);
    vector<pair<long long, long long> >a;
    long long count = 0;
    long long ans = 0;
    vector<long long> g;

    sort(A.begin(),A.end(),greater<int>());

    for(int i=0;i<N;i++){
        cin >> A[i];
        int t = A[i]/X;
        t = min(K,t);
        long long p = A[i] - (X*t);
        ans += p;
        K -= t;
        g.push_back(p);
    }

    if(K == 0){
        cout << ans << endl;
        return 0;
    }

    sort(g.begin(),g.end(),greater<int>());
    
    
    for(int i=0;i<N;i++){
        ans -= g[i];
        K--;
        if(K == 0) break;

    }

    cout << ans << endl;

}

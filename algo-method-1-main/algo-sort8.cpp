#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N,K;cin >> N >> K;
    vector<pair<long long, long long>> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i].first >> S[i].second;
    }

    sort(S.begin(),S.end());
    long long ans = 0;

    for(int i=0;i<N && K>0;i++){
        long long num = min(S[i].second,K);
        K -= num;
        ans += S[i].second *  num;
    }
    
    cout << ans << endl;

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,K;cin >> N >> K;
    vector<long long> a(N);
    for(int i=0;i<N;i++) cin >> a[i];

    long long res = K/N;
    vector<long long> v;
    for(int i=0;i<N;i++) v.push_back(i);

    long long p = K%N;
    vector<long long> ans(N);
    for(long long i=0;i<N;i++) ans[i] = res;

    sort(v.begin(),v.end(), [&](long long i, long long j){
        return a[i] < a[j];
    });

    for(long long i=0;i<p;i++){
        ans[v[i]]++;
    }

    for(long long i=0;i<N;i++){
        cout << ans[i] << endl;
    }

}
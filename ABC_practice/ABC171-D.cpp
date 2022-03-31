#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;cin >> N;
    vector<int> A(N);
    map<int,int> mp;

    long long ans = 0;
    for(int i=0;i<N;i++){
        cin >> A[i];
        mp[A[i]]++;
        ans += A[i];
    }

    int Q;cin >> Q;
    for(int i=0;i<Q;i++){
        int b,c;cin >> b >> c;
        long long res = mp[b];
        ans -= res*b;
        ans += res*c; 
        cout << ans << endl;
        mp[b] = 0;
        mp[c] += res;
    }


}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N);
    map<long long,long long> mp;
    for(int i=0;i<N;i++){
        cin >> A[i];
        mp[A[i]%200]++;
    }

    long long ans = 0;

    for(int i=0;i<200;i++){
        ans += (mp[i]*(mp[i]-1))/2;
    }

    cout << ans << endl;   

}
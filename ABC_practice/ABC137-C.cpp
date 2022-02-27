#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<string> S(N);
    map<string ,long long> mp;
    for(int i=0;i<N;i++){
        cin >> S[i];
        sort(S[i].begin(),S[i].end());
        mp[S[i]]++;
    }
    long long ans = 0;
    for(auto &p : mp){
        ans += p.second * (p.second - 1) / 2;
    }

    cout << ans << endl;
    
}
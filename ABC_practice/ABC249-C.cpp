#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N,K;cin >> N >> K;
    vector<string> S(N);
    for(int i=0;i<N;i++) cin >> S[i];


    ll ans = -1;

    for (int bit = 0; bit < (1 << N); ++bit) {
        ll count = 0;
        map<char,ll> mp;
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)){
                ll t = S[i].size();
                string s = S[i];
                for(int j=0;j<t;j++){
                    mp[s[j]]++;
                }
            }
        }

        for(auto &k : mp){
            if(k.second == K) count++;
        }

        ans = max(ans,count);

    }

    cout << ans << endl;

}
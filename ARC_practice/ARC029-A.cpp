#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;


int main(){
    ll N;cin >> N;
    vector<ll> t(N);

    ll ans = inf;

    for(int i=0;i<N;i++) cin >> t[i];

     for (int bit = 0; bit < (1 << N); ++bit) {
        ll sum1 = 0;
        ll sum2 = 0;
        for (int i = 0; i < N; ++i) {
            if (bit & (1 << i)){
                sum1 += t[i];
            }
            else{
                sum2 += t[i];
            }
        }

        sum2 = max(sum2,sum1);
        ans = min(ans,sum2);
    }


    cout << ans << endl;   
}
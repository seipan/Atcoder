#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll n;cin >> n;
    ll ans = inf;

    for(ll i=n;i>=0;i--){
        for(ll j=1;j*j<=i;j++){
            if(i%j != 0) continue;
            ll res = abs(j-(i/j));
            res += (n-i);
            //cout << res << endl;
            ans = min(ans,res);
        }
    }

    cout << ans << endl;
}
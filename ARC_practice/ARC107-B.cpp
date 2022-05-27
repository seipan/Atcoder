#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576

ll f(ll N,ll K){
    if(K < 1){
        return 0;
    }
    ll res = min(K-1,(2*N)+1-K);
    return res;
}

int main(){
    ll N,K;cin >> N >> K;

    ll ans = 0;
    for(ll i=2;i<=2*N;i++){
        ll y = i-K;

        if(y>=2&&y<=N*2){
            ll count = 1LL *f(N,i)*f(N,(i-K));
            ans += count;
        }
    }


    cout << ans << endl;

}
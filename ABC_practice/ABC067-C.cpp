#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N;cin >> N;
    vector<ll> A(N);
    for(ll i=0;i<N;i++) cin >> A[i];

    if(N==2){
        cout << abs(A[0]-A[1]) << endl;
        return 0;
    }

    vector<ll> x(N);
    x[0] = A[0];
    for(ll i=1;i<N;i++) x[i] = x[i-1] + A[i];

    ll ans = infl;

    for(ll i=1;i<N-1;i++){
        ll y = x[N-1]-x[i];
        ans = min(ans,abs(x[i]-y));
    }

    cout << ans << endl;

}

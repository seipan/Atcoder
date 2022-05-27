#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){ 
    ll N;cin >> N;
    vector<ll> A(N);
    for(int i=0;i<N;i++) cin >> A[i];

    ll ans = A[0];
    for(int i=0;i<N;i++){
        ans = gcd(ans,A[i]);
    }

    cout << ans << endl;

}
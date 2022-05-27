#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){ 
    ll N;cin >> N;
    ll ans = inf;
    for(int i=0;i<N;i++){
        ll a;cin >> a;
        ans = min(ans,a);
    }

    cout << ans << endl;

}
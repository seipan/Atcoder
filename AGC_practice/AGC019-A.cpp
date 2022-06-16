#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;


int main(){
    ll Q,H,S,D,N;cin >> Q >> H >> S >> D >> N;
    ll q = Q*8;
    ll h = H*4;
    ll s = S*2;
    ll d = D;

    ll a = min({q,h,s,d});
    ll b = min({q,h,s});

    if(N==1){
        cout << b/2 << endl;
        return 0;
    }
    if(N%2 == 0){
        cout << (N/2)*a << endl;
        return 0;
    }
    cout << ((N/2)*a)+(b/2) << endl;
}
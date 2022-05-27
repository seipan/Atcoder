#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;

int main(){
    ll N,M;cin >> N >> M;
    if(N==1 && M==1){
        cout << 1 << endl;
        return 0;
    }
    if(N==1){
        cout << M-2 << endl;
        return 0;
    }
    if(M==1){
        cout << N-2 << endl;
        return 0;
    }

    ll n = N-2;
    ll m = M-2;
    ll ans = n*m; 


    cout << ans << endl;

}
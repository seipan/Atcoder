#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()



int main(){ 
    ll N,Q;cin >> N >> Q;
    string S;cin >> S;

    vector<ll> v(N,0);
    for(ll i=1;i<N;i++){
        if(S[i]=='C' && S[i-1]=='A') v[i] = v[i-1]+1;
        else v[i] = v[i-1];
    }

    for(ll i=0;i<Q;i++){
        ll l,r;cin >> l >> r;
        l--;r--;
        cout << v[r]-v[l] << endl;
    }


}
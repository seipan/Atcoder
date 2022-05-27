#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576

int main(){
    ll N;cin >> N;

    ll res = 1;

    for(ll i=0;i<N;i++){
        ll T;cin >> T;
        res = gcd(res,T);
    }

    cout << res << endl;



}
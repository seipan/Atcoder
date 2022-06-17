#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()



int main(){ 
    ll N;cin >> N;
    vector<ll> A(5);

    ll res = infl;

    for(int i=0;i<5;i++){
        cin >> A[i];
        res = min(res,A[i]);
    }
    
    ll ans = 4 +  (N + res - 1) / res;

    cout << ans << endl;
}
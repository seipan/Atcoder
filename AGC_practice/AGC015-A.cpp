#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576

int main(){
    ll N,A,B;cin >> N >> A >> B;
    ll ans = A+(N-1)*B;
    ans -= B+(N-1)*A;
    if(ans<0){
        cout << 0 << endl;
        return 0;
    }

    cout << ans+1 << endl;

}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll A,B,K,L;cin >> A >> B >> K >> L;
    ll res = min(B,A*L);
    ll ans = (K/L)*res;
    ans += (K%L)*A;

    ll ans2 = ((K/L)+1)*res;

    cout << min(ans,ans2) << endl;
}
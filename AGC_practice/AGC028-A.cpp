#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()



int main(){ 
    ll N,M;cin >> N >> M;
    string S,T;cin >> S >> T;

    ll res = lcm(N,M);
    ll k = gcd(N,M);
    N /= k; M /= k;
    bool flag = true;

    for(int i=0;i<k;i++){
        if(S[i*N] != T[i*M]) flag = false;
    }

    if (flag) cout << res << endl;
    else cout << -1 << endl;

}
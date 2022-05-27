#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const long long INF = 5100000000000000000;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()

long myPow(long x, long n, long m){
  if(n == 0)
    return 1;
  if(n % 2 == 0)
    return myPow(x * x % m, n / 2, m);
  else
    return x * myPow(x, n - 1, m) % m;
}

int main(){
    ll A,B,C;cin >> A >> B >> C;
    ll res = myPow(B,C,4);

    if(res==0) res = 4;
    ll ans = 1;

    for(int i=0;i<res;i++){
        ans *= A;
        ans%=10;
    }

    cout << ans << endl;


}
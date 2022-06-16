#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){ 
    ll A,B;cin >> A >> B;

    ll ans = (B/4)-((A-1)/4);
    ans -= (B/100)-((A-1)/100);
    ans += (B/400)-((A-1)/400);


    cout << ans << endl;


}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;


int main(){
    ll L,R;cin >> L >> R;
    
    for(ll i=R-L;i>=0;i--){
        for(ll j=L;j+i<=R;j++){
            if(gcd(j,j+i) == 1){
                cout << i << endl;
                return 0;
            }
        }
    }


}
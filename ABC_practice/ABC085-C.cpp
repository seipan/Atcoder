#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N,Y;cin >> N >> Y;
    for(ll i=0;i<=N;i++){
        for(ll j=0;j<=N;j++){
            ll c = N- (i+j);
            if(c<0) continue;
            if((10000*i + 5000*j + 1000*c) == Y){
                cout << i << " " << j << " " << c << endl;
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1 << endl;

}
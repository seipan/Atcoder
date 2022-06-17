#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N;cin >> N;
    vector<ll> A(N);
    map<ll,ll> mp;
    for(int i=0;i<N;i++){
        cin >> A[i];
        mp[A[i]]++;
    }

    ll count = 0;

    for(int i=0;i<N;i++){
        ll X = A[i];
        for(ll j=1;j*j<=X;j++){
            ll p = mp[j];
            ll k = mp[X/j];
            if(j == (X/j)){
                count += (p*(p-1));
                continue;
            }

            ll t = p*k;
            count += (t*2);

        }
    }
    

    cout << count << endl;

}
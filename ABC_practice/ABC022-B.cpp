#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576

int main(){
    ll N;cin >> N;
    vector<ll> A(N);
    map<ll,ll> mp;

    ll ans = 0;

    for(int i=0;i<N;i++){
        int a;cin >> a;
        if(mp[a]) ans++;
        mp[a]++;
    }

    cout << ans << endl;



}
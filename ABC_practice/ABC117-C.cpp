#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576
using Graph = vector<vector<ll>>;

int main(){
    ll N,M;cin >> N >> M;
    vector<ll> X(M);
    for(ll i=0;i<M;i++) cin >> X[i];

    sort(ALL(X));
    vector<ll> v;
    for(int i=0;i<M-1;i++){
        v.push_back(X[i+1]-X[i]);
    }
    sort(ALL(v));

    ll ans = 0;

    for(int i=0;i<(M-N);i++){
        ans+=v[i];
    }

    cout << ans << endl;
}
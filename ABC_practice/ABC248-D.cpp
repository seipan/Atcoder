#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N;cin >> N;
    vector<ll> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    map<int,vector<ll>> mp;
    for(int i=0;i<N;i++){
        mp[A[i]].push_back(i+1);
    }

    ll Q;cin >> Q;
    for(int i=0;i<Q;i++){
        ll L,R,X;cin >> L >> R >> X;
        cout << upper_bound(ALL(mp[X]), R) - lower_bound(ALL(mp[X]), L) << endl;
        
    }
}
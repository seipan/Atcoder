#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const long long INF = 5100000000000000000;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
//解説AC

int main(){
    ll N;cin >> N;
    vector<ll> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    vector<ll> v = A;
    sort(ALL(v));

    map<ll,ll> mp;
    for(int  i=0;i<N;i++) mp[v[i]] = i;

    for(int i=0;i<N;i++){
        ll res = mp[A[i]];
        if(res < N/2) cout << v[N/2] << endl;
        else cout << v[N/2-1] << endl;
    }


}
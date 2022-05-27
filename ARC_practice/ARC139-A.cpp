#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){ 
    ll N;cin >> N;
    vector<ll> T(N);
    for(int i=0;i<N;i++) cin >> T[i];
    vector<ll> A(N+1);
    A[0] = 0;

    for(int i=1;i<=N;i++){
        ll t = pow(2,T[i-1]);
        A[i] = min(t,(A[i-1]+1));
    }

    cout << A[N] << endl;


}
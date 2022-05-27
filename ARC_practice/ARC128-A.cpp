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
    vector<ll> ans(N,0);
    for(int i=0;i<N;i++) cin >> A[i];

    for(int i=0;i<N-1;i++){
        if(A[i]>A[i+1]){
            ans[i] ^= 1;
            ans[i+1] ^= 1; 
        }

    }
    for(int i=0;i<N;i++){
        cout<<ans[i]<<" ";
    }



}
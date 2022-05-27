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
    sort(A.begin(),A.end(),greater<ll>());
    A.erase(unique(A.begin(), A.end()), A.end());

    ll res = 0;
    ll ans = 1;
    for(int i=0;i<N;i++){
        if(mp[A[i]] >= 4){
            if(res == 0){
                cout << A[0]*A[0] << endl;
                return 0;
            }
        }
        if(mp[A[i]] >= 2){
            //cout << A[i] << endl;
            ans *= A[i];
            res++;
        }
        if(res == 2){
            cout << ans << endl;
            return 0;
        }
    }
  
  	cout << 0 << endl;


}
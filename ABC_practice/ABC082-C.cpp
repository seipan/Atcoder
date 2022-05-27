#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
const long long INF = 5100000000000000000;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N;cin >> N;
    map<ll,ll> mp;
    vector<ll> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
        mp[A[i]]++;
    }
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    ll count = 0;
    N = A.size();

    for(int i=0;i<N;i++){
        if(mp[A[i]] > A[i]){
            count += abs(mp[A[i]]- A[i]);
            continue;
        }
        if(mp[A[i]]<A[i]){
            count += mp[A[i]];
        }

    }



    cout << count << endl;


}
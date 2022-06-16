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
    bool flag = true;
    for(int i=0;i<N;i++) cin >> A[i];

    ll ans = 0;

    for(int i=0;i<N;i++){
        while (i+1 < N && A[i] == A[i+1]) ++i;
        
        if (i+1 < N && A[i] < A[i+1]) {
            while (i+1 < N && A[i] <= A[i+1]) ++i;
        }
        else if (i+1 < N && A[i] > A[i+1]) {
            while (i+1 < N && A[i] >= A[i+1]) ++i;
        }

        ans++;
    }

    cout << ans << endl;
}
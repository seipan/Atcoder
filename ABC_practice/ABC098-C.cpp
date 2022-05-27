#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()

int main(){
    ll N;cin >> N;
    string S;cin >> S;

    vector<ll> lcount(N+2,0);
    vector<ll> rcount(N+2,0);

    for(int i=0;i<N;i++){
        if(S[i] == 'W') lcount[i+1] = lcount[i]+1;
        else lcount[i+1] = lcount[i];
    }
    for(int i=0;i<=N+1;i++){
        //cout << lcount[i]  << " ";
    }
    //cout << endl;

    for(int i=N-1;i>=0;i--){
        if(S[i] == 'E') rcount[i+1] = rcount[i+2] + 1;
        else rcount[i+1] = rcount[i+2];
    }
    for(int i=0;i<=N+1;i++){
        //cout << rcount[i]  << " ";
    }
    //cout << endl;

    ll ans = infl;
    for(int i=1;i<=N;i++){
        ll res = lcount[i-1] + rcount[i+1];
        ans = min(ans,res);
        //cout << res << endl ;
    }

    cout << ans << endl;


}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N,M;cin >> N >> M;
    vector<string> S(N);
    vector<ll> A(N);
    ll cnt[3];
    for(int i=0;i<2;i++) cnt[i] = 0;
    for(int i=0;i<N;i++){
        cin >> S[i];
        string T = S[i];
        ll count = 0;
        for(auto &j: T){
            if(j == '1') count++;
        }
        cnt[count%2]++;
    }

    cout << cnt[0]*cnt[1] << endl;


}
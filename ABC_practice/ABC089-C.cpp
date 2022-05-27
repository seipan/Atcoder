#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){ 
    ll N;cin >> N;
    vector<string> S(N);
    map<char,ll> mp;
    for(int i=0;i<N;i++){
        string T;
        cin >> S[i]; T = S[i];
        mp[T[0]]++;
    }
    char P[5] = {'M', 'A', 'R' , 'C', 'H'};
    ll ans = 0;

    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            for(int k=j+1;k<5;k++){
                ans += (mp[P[i]] * mp[P[j]] * mp[P[k]]);
            }
        }
    }

    cout << ans << endl;

}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<char,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N;cin >> N;
    string S;cin >> S;

    ll ans = 0;

    for(ll i=0;i<N;){
        if(S[i] == 'A'){
            ll j = i;
            int res = 0;
            int pes = 0;
            //cout << j << endl;
            while(S[j] == 'A'){
                j++;
                res++;
            }
            //cout << j << endl;
            if(S[j] == 'C'){
                i  = (j+2);
                continue;
            }
            j++;
            //cout << j << endl;
            while(S[j] == 'C'){
                j++;
                pes++;
            }
            //cout << j << endl;
            res = min(res,pes);
            ans += min(2,res);
            i = j;
            continue;
        }

        i++;
    }

    cout << ans << endl;


}
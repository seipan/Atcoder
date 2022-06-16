#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576

int main(){
    ll N,A,B,C,D;cin >> N >> A >> B >> C >> D;
    string S;cin >> S;
    vector<ll> dp1(N,-1);
    vector<ll> dp2(N,-1);

    dp1[A-1] = 1;
    dp2[B-1] = 1;

    for(int i=0;i<N;i++){
        if(dp1[i] > -1){
            if(i+1<N){
                if(S[i+1] != '#' && dp2[i+1] != 1){
                    dp1[i+1] = 1;
                    dp1[i] = 0;
                }
            }
            if(i+2<N){
                if(S[i+2] != '#' && dp2[i+2] != 1){
                    dp1[i+2] = 1;
                    dp1[i] = 0;
                }
            }

        }
        if(dp2[i] > -1){
            if(i+1<N){
                if(S[i+1] != '#' && dp1[i+1] != 1){
                    dp2[i+1] = 1;
                    dp2[i] = 0;
                }
            }
            if(i+2<N){
                if(S[i+2] != '#' && dp1[i+2] != 1){
                    dp2[i+2] = 1;
                    dp2[i] = 0;
                }
            }

        }
    }


    if(dp1[C-1] > -1 && dp2[D-1] > -1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

}
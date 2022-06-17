#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll A,B,C,D,E,F,X;cin >> A >> B >> C >> D >> E >> F >> X;
    ll taka,aoki;
    taka = ((X)/(A+C))*B*A;
    aoki = ((X)/(D+F))*E*D;

    //cout << taka << " " << aoki  << endl;

    taka += min(A,(X%(A+C)))*B;
    aoki += min(D,((X)%(D+F)))*E;

   // cout << taka << " " << aoki  << endl;

    if(taka == aoki){
        cout << "Draw" << endl;
        return 0;
    }
    if(taka > aoki){
        cout << "Takahashi" << endl;
        return 0;
    }
    if(taka < aoki){
        cout << "Aoki" << endl;
        return 0;
    }


}
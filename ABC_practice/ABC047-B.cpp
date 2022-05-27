#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576

int main(){
    ll W,H,N;cin >> W >> H >> N;

    map<ll,ll> xi;
    map<ll,ll> yi;

    for(ll i=0;i<N;i++){
        ll x,y,a;cin >> x >> y >> a;
        if(a == 1){
            for(ll i=0;i<x;i++) xi[i]++;
        }
        if(a == 2){
            for(ll i=x;i<W;i++) xi[i]++;
        }
        if(a == 3){
            for(ll i=0;i<y;i++) yi[i]++;
        }
        if(a == 4){
            for(ll i=y;i<H;i++) yi[i]++;
        }
    }

    ll count = 0;
    for(ll i=0;i<H;i++){
        if(!yi[i]) count++;
    }
    ll count1 = 0;
    for(ll i=0;i<W;i++){
        if(!xi[i]) count1++;
    }    
    cout << count*count1 << endl;
}
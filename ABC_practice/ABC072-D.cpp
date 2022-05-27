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
    vector<ll> p(N);
    for(int i=0;i<N;i++) cin >> p[i];

    ll count = 0;

    for(int i=0;i<N-1;i++){
        if(i+1 == p[i]){
           ll t = p[i];
           p[i] = p[i+1];
           p[i+1] = t;
           count++; 
        }
    }
    if(p[N-1] == N){
        count++;
    }

    cout << count << endl;

}
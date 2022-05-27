#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576
using Graph = vector<vector<ll>>;

int main(){
    ll res = 0;
    ll r;cin >> r;
    res += r*100;
    ll g;cin >> g;
    res += 10*g;
    ll b;cin >> b;
    res += b;

    if(res%4 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

}
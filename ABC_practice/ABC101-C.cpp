#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N,K;cin >> N >> K;
    vector<ll> A(N);
    ll count = 1;
    N -= K;
    count += (N/(K-1));

    if(N%(K-1) == 0){
        cout << count << endl;
        return 0;
    }
    else{
         cout << count+1 << endl;
        return 0;
    }



}
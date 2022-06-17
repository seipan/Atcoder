#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;



int main(){
    ll A,B,K;cin >> A >> B >> K;
    ll count = 0;
    while(true){
        if(A>=B){
            cout << count << endl;
            return 0;
        }
        A *= K;
        count++;
    }
}
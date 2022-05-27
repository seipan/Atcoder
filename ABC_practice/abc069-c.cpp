#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N;cin >> N;
    vector<ll> a(N);
    ll kisuu=0;ll yobai = 0;ll nibai = 0;
    for(int i=0;i<N;i++){
        cin >> a[i];
        if(a[i]%2 != 0) kisuu++;
        if(a[i]%4 == 0) yobai++;
        else if(a[i]%2 == 0) nibai++;
    }
    //cout << kisuu << " " << yobai << " " << nibai << endl;
    if(nibai == 0){
        if((kisuu-1)<=yobai){
            cout << "Yes" << endl;
            return 0;
        }
        else{
            cout << "No" << endl;
            return 0;
        }
    }
    if(yobai>=kisuu){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;


}
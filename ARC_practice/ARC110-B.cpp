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
    string T;cin >> T;

    string b = "110";

    if (N == 1) {
        if (T[0] == '1') {
            cout << 20000000000 << endl;
        } else {
             cout << 10000000000 << endl;
            }
        return 0;
    }

    ll place = -1;
    for(int i=0;i<3;i++){
        bool flag = false;
        for(int j=0;j<N;j++){
            if(T[j] != b[(i + j) % 3]){
                flag = true;
                break;
            }
        }

        if(!flag){
            place = i;
            break;
        }
    }

    if(place == -1){
        cout << 0 << endl;
        return 0;
    }

    ll l = ceil((long double)(place + N) / 3);

    cout << 10000000000 - l + 1 << endl;
}

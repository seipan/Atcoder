#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){ 
    double N,K;cin >> N >> K;
    double ans = 0;
    //cout << ans << endl;

    for(double i=1;i<=N;i++){
        double sum = (1/N);
        //cout << sum << endl;
        double now = i;
        if(now >= K){
            ans += sum;
            continue;
        }
        while(true){
            if(now*2 >= K){
                sum *= 0.5;
                break;
            }
            now *= 2;
            sum *= 0.5;
        }
        //cout << count << endl;
        ans += sum;
        //cout << sum << endl;
    }

    cout << fixed << setprecision(11);
    cout << ans << endl;

}
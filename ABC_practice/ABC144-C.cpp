#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;cin >> n;
    int ans = -111111;
    for(long long i=0;i*i <= n;i++){
        if(n%i==0){
            long long res = i*(n/i);
            ans = min(ans,res);
        }
    }
    cout << ans-2 << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define INF 9223372036854775000

int main(){
    long long N;cin >> N;
    long long ans = INF;

     for(long long a=0;a<=1000000;a++){
        for(int i=0;i<100;i++){
            long long b = a+i;
            long long X = (a+b)*((a*a)+(b*b));
            if(X>=N){
                ans = min(ans,X);                 
            }
        }

        for(int i=0;i<100;i++){
            long long b = a-i;
            long long X = (a+b)*((a*a)+(b*b));
            if(X>=N){
                ans = min(ans,X);                 
            }
        }

    }

    cout << ans << endl;
}

// 1000002262298522724
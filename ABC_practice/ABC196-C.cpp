#include <bits/stdc++.h>
using namespace std;

int Keta(long long n){
    int a = 0;
    while(n!=0){
        n /= 10;
        a++;
    }

    return a;
}

int main(){
    long long N;cin >> N;
    long long K = N;
    int n = Keta(N);
    int p = n / 2;
    string num = to_string(N);

    //cout << n << endl;

    if(n%2==0){
        for(int i=0;i<p;i++){
            N /= 10;
        }
    }
    else{
        N = 1;
        for(int i=0;i<p;i++){
            N *= 10;
        }
    }

    long long ans = N-1;

    //cout << ans << endl;

    if(n%2==0){
        string T = num.substr(0,p);
        string t = T;
        t += T;

        long long res = stoll(t);
        //cout << res << " " << N << endl;
        if(res<=K){
            ans++;
        }
    }
    
    cout << ans << endl;


}
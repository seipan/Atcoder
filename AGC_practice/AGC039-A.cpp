#include <bits/stdc++.h>
using namespace std;


int main(){
    string S;cin >> S;
    long long K;cin >> K;

    long long count = 0;
    int N = S.size();

    int used[N+1] = {0};
    bool flag = true;

    for(int i=0;i<N-1;i++){
        if(S[i]!=S[i+1]) flag = false;
    }

    if(flag) {cout << (N*K)/2 << endl;return 0;}

    for(int i=1;i<N;i++){
        if(S[i] == S[i-1]){
            if(used[i-1] == 0){
                count++;
                used[i] = 1;
            }
        }
    }
    if(K==1) cout << count << endl;

    long long ans = 0;

    long long a = 0;
    for(int i=1;i<N;i++){
        if(S[i]!=S[0]) break;
        a++;
    }

    long long b = 0;
    for(int i=N-2;i>=0;i--){
        if(S[i]!=S[N-1]) break;
        b++;
    }
    a++;
    b++;

    if(K>=2){
        ans += (K*count);
        //cout << ans << endl;
        if(S[N-1] == S[0]){
            //cout << a/2 << " " << b/2 << " " << (a+b)/2;
            long long t = ((a/2) + (b/2)) - ((a+b)/2);
            //cout << t << endl;
            ans -= ((K-1)*t);
        }
        cout << ans << endl;
    }

}

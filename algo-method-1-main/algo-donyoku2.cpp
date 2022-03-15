#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    int ans = 0;
    while(true){
        if(N%2==0){
            ans++;
            N /= 2;
        }
        else{
s            ans++;
            N -= 1;
        }
        if(N<=0) break;
    }

    cout << ans << endl;
}
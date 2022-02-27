#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N; 
    int ans = 0; 
    for(int i=0;i<N;i++){
        int b = N-i;
        for(int j=1;j*j<b;j++){
            if(b%j == 0){
                ans++;
                if(j!=b/j) ans++;
            }
        }
    }

    cout << ans << endl;
}
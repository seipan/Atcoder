#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;

    int ans = 1;
    int res = N;
   
    while(true){
        if(res%3 == 0){
            res /= 3;
            ans++;
        }
        else{
            res--;
            ans++;
        }
        //cout << res << endl;
        if(res == 0) break;
        
    }


    cout << ans-1 << endl;
}
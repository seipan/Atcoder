#include<bits/stdc++.h>
using namespace std;



int main(){
    int V[4] = {50,10,5,1};
    int X;cin >> X;
    vector<int> A(4);
    for(int i=0;i<4;i++) cin >> A[i];

    int ans = 0;

    for(int i=0;i<4;i++){
        for(int j=0;j<A[i];j++){
            ans++;
            X-=V[i];
            if(X==0){
                cout << ans << endl;
                return 0;
            }
            if(X<0){
                X+=V[i];
                ans--;
                break;
                
            }
        }
     }
}
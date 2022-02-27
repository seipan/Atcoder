#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B;cin >> A >> B;
    int ans = 0;
    for(int i=1;i<10000;i++){
        int x = i * 0.08;
        int y = i * 0.1;
        if(x == A && y == B){ 
            ans = i;
            break;
        }
    }
    if(ans == 0) ans = -1;


    cout << ans << endl;
}
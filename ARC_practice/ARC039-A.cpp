#include <bits/stdc++.h>
using namespace std;

int main(){
    string A,B;cin >> A >> B;
    string A1 = A;
    string B1 = B;

    for(int i=0;i<3;i++){
        if(A[i] != '9'){
            A[i] = '9';
            break;
        }
    }
    
    
    int res = stoi(A) - stoi(B);

    if(B1[0]!= '1'){
        B1[0] = '1';
    }
    else if(B1[1] != '0'){
        B1[1] = '0';
    }
    else if(B1[2] != '0'){
        B1[2] = '0';
    }

    int ans = stoi(A1) - stoi(B1);

    ans = max(ans,res);

    cout << ans << endl;

}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> X(N+1);vector<int> Y(N+1);vector<int> T(N+1);
    for(int i=1;i<=N;i++) cin >> T[i] >> X[i] >> Y[i];

    bool flag = true;
    X[0]=0;Y[0]=0;

    for(int i=0;i<N;i++){
        int a = abs(X[i+1]-X[i]) + abs(Y[i+1]-Y[i]);
        int b = T[i+1] - T[i];
        if(b<a){
            flag = false;
            break;
        }
        if(b%2==0 && a%2!=0){
            flag = false;
            break;
        }
        if(b%2!=0 && a%2==0){
            flag = false;
            break;
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define INF 2000000000



int main(){
    int A,B,W;cin >> A >> B >> W;
    W *= 1000;
    int m = INF;int M = 0;
    for(int i=1;i<=1000000;i++){
        if(A*i<=W && W<= B*i){
            m = min(m,i);
            M = max(M,i);
        }
    }

    if(M == 0) cout << "UNSATISFIABLE" << endl;
    else cout << m << ' ' << M << endl;
    
}
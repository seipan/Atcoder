#include <bits/stdc++.h>
using namespace std;

int main(){
    long long A,K;cin >> A >> K;
    const long long M = 2000000000000;

    int count = 0;

    if(K==0){
        cout << M - A << endl;
        return 0;
    }

    while(true){
        if(M<=A){
            cout << count << endl;
            return 0;
        }

        A += (1+(K*A));
        count++;

    }

    cout << count << endl;
}
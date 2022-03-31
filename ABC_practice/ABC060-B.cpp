#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;cin >> A >> B >> C;

    for(int i=0;i<=10000000;i++){
        if((B*i+C)%A == 0){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}
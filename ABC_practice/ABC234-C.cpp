#include <bits/stdc++.h>
using namespace std;

string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main(){
    int K; cin >> K;
    string T = toBinary(K);
    int N = T.length();
    for(int i=0;i<N;i++){
        if(T[i]=='1') T[i] = '2';
    }
    cout << T << endl;
}
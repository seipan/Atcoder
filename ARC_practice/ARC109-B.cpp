#include <bits/stdc++.h>
using namespace std;


int main(){
    long long n;cin >> n;
    long long i=1;
    long long T = n+1;
    long long a;

    while(true){
        T -= i;
        if(T<0){
            T += i;
            a = i-1;
            break;
        }
        i++;
    }

    cout << T-a << endl;



}
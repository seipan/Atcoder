#include <bits/stdc++.h>
using namespace std;
long double pow(long double x, long double y);

int main(){
    long double N,d;
    cin >> N;

    int k = 0;

    while(true){
        if(pow(2,k)>N){
            d = k-1;
            break;
        }
        k++;
    }

    cout << d << endl;
    
}
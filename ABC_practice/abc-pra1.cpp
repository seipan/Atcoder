#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N<42){
        cout << "AGC0" << N << endl;
    }
    else if(42<=N<100){
        cout << "AGC0" << N+1 << endl;
    }
    else  cout << "AGC" << N+1 << endl;
}
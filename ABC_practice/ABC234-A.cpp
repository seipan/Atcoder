#include <bits/stdc++.h>
using namespace std;

int res(int x){
    int a = x*x +2*x+3;
    return a;
}

int main(){
    int t;
    cin >> t;
    int a = res(res(res(t)+t) + res(res(t)));
    cout << a << endl;
}
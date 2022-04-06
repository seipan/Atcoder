#include <bits/stdc++.h>
using namespace std;


int main(){
    long long A,B,C,D; cin >> A >> B >> C >> D;
    long long ans = B-A+1;
    long long t = (B/C) - (A/C);
    if(A%C==0) t++;//cout << t;
    long long g = (B/D) - (A/D);
    if(A%D==0) g++;//cout << g;
    ans -= (g+t);

    long long k = lcm(C,D);
    long long p = (B/k) - (A/k);
    if(A%k==0) p++;

    ans += p;

    cout << ans << endl;

}
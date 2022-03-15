#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    int ans = 0;
    ans += N/5;
    int b= N%5;
    ans += b;

    cout << ans << endl;
}
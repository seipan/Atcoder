#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin >> A[i];

    long double sum = 0;
    for(int i=0;i<n-1;i++){
        sum += (A[i+1] - A[i]);
    }

    long double ans = sum/(n-1);

    cout << fixed << setprecision(3);

    cout << ans << endl;

}
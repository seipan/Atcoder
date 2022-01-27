#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;cin >> N;
    vector<long long> A(N);
    for(long long i=0;i<N;i++) cin >> A[i];
    sort(A.begin(),A.end());

    cout << fixed << setprecision(2);

    if(N%2!=0){
        cout << A[(N-1)/2] << endl;
        return 0;
    }
    if(N%2==0){
        long double a = A[N/2-1] + A[N/2];
        long double y = a/2;
        cout << y << endl;
    }

}
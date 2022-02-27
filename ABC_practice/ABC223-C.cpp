#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<double> A(N);
    vector<double> B(N);
    double sum = 0;

    for(int i=0;i<N;i++){
        cin >> A[i] >> B[i];
        sum += A[i]/B[i];
    }
    double T = sum / 2;
    double ans = 0;

    for(int i=0;i<N;i++){
        double v = min(T,A[i]/B[i]);
        ans += v*B[i];
        T -=v;
    }
    cout << fixed << setprecision(15);
    cout << ans << endl;

}
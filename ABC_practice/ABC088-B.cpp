#include <bits/stdc++.h>
using namespace std;

int main(){
    int N , Bob , Alice;
    cin >> N;
    vector<int> A(N+1);
    for(int i=0;i<N;i++) cin >> A[i];
    Alice = 0;
    Bob = 0;
    sort(A.begin(),A.end(),greater<int>());

    for(int i=0;i<N;i+=2){
        Alice += A[i];
        Bob += A[i+1];
    }
    cout << abs(Alice - Bob) << endl;

}
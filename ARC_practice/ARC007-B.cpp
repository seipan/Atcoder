#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;cin >> N >> M;
    vector<int> A(M+1);
    A[0] = 0;
    for(int i=1;i<=M;i++) cin >> A[i];
    vector<int> v;
    for(int i=1;i<=N;i++) v.push_back(i);

    for(int i=1;i<=M;i++){
        for(int j=0;j<N;j++){
            if(A[i] == v[j]) v[j] = A[i-1];
        }
    }

    for(int i=0;i<N;i++){
        cout << v[i] << endl;
    }


}
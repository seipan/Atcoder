#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    vector<int> v;
    for(int i=1;i<=N;i++) v.push_back(i);

    sort(v.begin(),v.end()[&](int i, int j)){
        return A[i]<A[j];
    }
    for(int i=0;i<N;i++) cout << v[i] << endl;

}
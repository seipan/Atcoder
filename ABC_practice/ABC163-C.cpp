#include <bits/stdc++.h>
using namespace std;
vector<int> mp(N+1);

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i=2;i<=N;i++){
        cin >> A[i];
        mp[A[i]]++;
    }
    for(int i=1;i<=N;i++){
        cout << mp[i] << endl;
    }
}   
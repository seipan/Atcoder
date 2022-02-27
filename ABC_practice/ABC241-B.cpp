#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;cin >> N >> M;
    vector<int> A(N);
    vector<int> A(M);
    map<int,int> mp;
    for(int i=0;i<N;i++){
        cin >> A[i];
        mp[A[i]]++;
    }
    for(int i=0;i<M;i++) cin >> B[i];

    for(int i=0;i<M;i++){
        if(mp[B[i]]>0) mp[B[i]]--;
        else{
            cout << "No" << endl;
            return 0;
        } 
    }

    cout << "Yes" << endl;

}
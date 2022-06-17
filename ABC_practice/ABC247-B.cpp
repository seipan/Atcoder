#include <bits/stdc++.h>
using namespace std;
const int inf = INT_MAX / 2;

int main(){
    int N;cin >> N;
    vector<string> T(N);
    vector<string> A(N);
    map<string,int> mp;
    for(int i=0;i<N;i++){
        cin >> T[i] >> A[i];
        mp[T[i]]++;
        mp[A[i]]++;
        if(T[i] == A[i]) mp[T[i]]--;
    }

    bool flag = true;

    for(int i=0;i<N;i++){
        if(mp[T[i]] >1 && mp[A[i]] > 1) flag = false;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    

}
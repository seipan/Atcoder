#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;cin >> N >> Q;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    for(int i=0;i<Q;i++){
        int q;cin >> q;
        cout << A.end() - lower_bound(A.begin(),A.end(),q) << endl;
    }

}
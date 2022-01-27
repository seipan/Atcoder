#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N);
    for(int i=1;i<N;i++) cin >> A[i];

    for(int i=0;i<N;i++){
        int res = 0;
        while(i!=0){
            res++;
            i = A[i];
        }
        cout << res << endl;
    }   
}
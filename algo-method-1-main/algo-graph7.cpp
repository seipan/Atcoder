#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N);
    for(int i=1;i<N;i++) cin >> A[i];

    for(int i=0;i<N;i++){
        int res = 0;
        int X = i;
        while(i!=0){
            res++;
            X = A[X];
        }
        cout << res << endl;
    }   
}

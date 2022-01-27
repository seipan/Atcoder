#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;
    vector<int> A(N);
    vector<int> D(N);
    for(int i=1;i<=N;i++) cin >> A[i];

    int count =1;

    D[X] = 1;
    int i = A[X];
    while(true){
        if(D[i] == 1){
            cout << count << endl;
            return 0;
        }
        else{
            D[i] = 1;
            i = A[i];
            count ++;
        }
    }


}
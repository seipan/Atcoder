#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    int X[310],Y[310];
    for(int i=0;i<N;i++) cin >> X[i] >> Y[i];

    int count = 0;

    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                if((X[j]-X[i])*(Y[k]-Y[i])-(X[k]-X[i])*(Y[j]-Y[i])!=0) count++;
            }
        }
    }

    cout << count << endl;
}
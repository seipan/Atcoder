#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int a[110] = {0};
    cin >> N;
    vector<string> S(N);
    for(int i=0;i<N;i++) cin >> S[i];

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(S[i] == S[j]) a[i]++;
        }
    }

    int res = -1110000;
    int v;
    for(int i=0;i<N;i++){
        if(a[i]>res) {
            res = a[i];
            v = i;
        }
    }

    cout << S[v] << endl; 

}   
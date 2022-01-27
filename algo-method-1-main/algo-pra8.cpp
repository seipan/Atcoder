#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,V;
    cin >> N >> V;
    int res=1;
    int comp =0;
    if(N>V) comp=V;
    else if(V>=N) comp=N;
    for(int i=2;i<=comp;i++){
        if(N%i==0 && V%i==0) res=i;
    }

    cout << res << endl;

}
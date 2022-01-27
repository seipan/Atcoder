#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    bool flag=true;
    if(N==1) flag =false
    else if(N!=1 && N!=2){
    for(int i=2;i<N;i++){
        if(N%i==0) flag=false;
    }
    }
    if(flag){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}
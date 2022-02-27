#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;cin>>N;
    string S = "";
    for(int i=0;i<120;i++){
        if(N%2 == 0){
            N /=2;
            S += 'B';
        }
        else{
            N -= 1;
            S += 'A';
        }
        if(N == 0){
            reverse(S.begin(),S.end());
            cout << S << endl;
            return 0;
        }
    }
}
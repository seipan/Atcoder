#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int S[110];
    for(int i=0;i<N;i++) cin >> S[i];

    bool flag = false;
    int count = 0;

    for(int i=0;i<N;i++){
        for(int a=1;a<S[i];a++){
            for(int b=1;b<S[i];b++){
                if(4*a*b+3*a+3*b == S[i]){
                    flag = true;
                    count++;
                    break;
                } 
            }
            if(flag) break;
        }
        flag = false;
    }

    cout << N-count << endl;
}
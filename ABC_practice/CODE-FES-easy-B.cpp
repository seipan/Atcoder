#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int count = 0;
    for(int i=0;i<12;i++){
        if(20*i<n && n<=20*(i+1)){
            count = i;
            break;
        }
    }

    if(count%2 == 0){
        
    }
}
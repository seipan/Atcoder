#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int a[110];
    int b[110] = {0};
    cin >> N;
    for(int i=0;i<N;i++) cin >> a[i];

    for(int i=0;i<N;i++){
       b[a[i]-1]++;
    }
    
    int res =0;
    
    for(int i=0;i<9;i++){
        if(b[res]<b[i]) res=i;

    }

    int ans = res + 1;

    cout << res << endl;


    

}
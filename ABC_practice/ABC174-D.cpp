#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;cin >> N;
    string c;cin >> c;
    long long ans = 0;
    for(int i=0;i<N;i++){
        if(c[i] == 'R') ans++;
    }

    N = ans;
    for(int i=0;i<N;i++){
        if(c[i] == 'R') ans--;
    }
    

    cout << ans << endl;

}
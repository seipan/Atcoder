#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<double> t(N);
    vector<double> l(N);
    vector<double> r(N);
    for(int i=0;i<N;i++){
        cin >> t[i] >> l[i] >> r[i];
        if(t[i] == 2){
            r[i] -= 0.1;
        }
        if(t[i] == 3){
            l[i] += 0.1;
        }
        if(t[i] == 4){
            l[i] += 0.1;
            r[i] -= 0.1;
        }

    }

    int ans = 0;

    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if( (r[i]>=l[j] && l[i]<=l[j]) || (r[j]>=l[i] && l[j]<=l[i])) ans++;
        }
    }

    cout << ans << endl;
}
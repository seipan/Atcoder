#include<bits/stdc++.h>
using namespace std;

#define INF 1010000000

int main(){
    long long N;cin >> N;
    vector<long long> a(N);
    for(int i=0;i<N;i++) cin >> a[i];

    long long res = (N*(N-1)/2);
    sort(a.begin(),a.end());
    a.push_back(-1);
    long long cnt = 1;

    for(int i=0;i<N;i++){
        if(a[i]!=a[i+1]){
            res -= ((cnt*(cnt-1))/2);
            cnt = 1;
        }
        else{
            cnt++;
        }
    }

    cout << res << endl;
}
#include <bits/stdc++.h>
using namespace std;
const int inf = INT_MAX / 2;

int main(){
    int N,T;cin >> N >> T;
    vector<int> t(N);
    int sum = 0;
    for(int i=0;i<N;i++){
        cin >> t[i];
        t[i] -= sum;
        sum += t[i];
    }


    long long ans = T;
    for(int i=1;i<N;i++){
        ans += min(T,t[i]);
    }

    cout << ans << endl;
}
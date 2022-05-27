#include <bits/stdc++.h>
using namespace std;


int main(){
    int N,X;cin >> N >> X;
    vector<int> x(N);
    for(int i=0;i<N;i++) cin >> x[i];

    vector<int> v;
    for(int i=0;i<N;i++){
        int t = abs(x[i] - X);
        v.push_back(t);
    }

    for(int i=0;i<N;i++) cout << v[i] << " ";
    cout << endl;

    int ans = v[0];

    for(int i=1;i<N;i++){
        ans = lcm(ans,v[i]);
    }

    cout << ans << endl;
}
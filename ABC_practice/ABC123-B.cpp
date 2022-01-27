#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[5];
    for(int i=0;i<5;i++) cin >> A[i];
    vector<int> v;
    for(int i=0;i<5;i++) v.push_back(i);

    int ans = 1000000000;
    do{
        int t=0;
        for(int i=0;i<5;i++){
            int vi = v[i];
            if(t%10 > 0) t = t - (t%10) + 10;
            t += A[vi];
        }
        ans = min(ans,t);
    } while (next_permutation(v.begin(), v.end()));

    cout << ans << endl;
}
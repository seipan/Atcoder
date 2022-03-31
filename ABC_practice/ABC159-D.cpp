#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];
    map<int,long long> mp;
    for(int i=0;i<N;i++){
        mp[A[i]]++;
    }

    int used[N+1] = {0};

    long long ans = 0;
    for(int i=0;i<N;i++){
        if(used[A[i]] == 1) continue;
        if(mp[A[i]]>1){
            long long n = mp[A[i]];
            ans += n*(n-1)/2;
            used[A[i]] = 1; 
        }
    }

    for(int i=0;i<N;i++){
        long long res = ans;
        if(mp[A[i]]>1){
            long long n = mp[A[i]];
            res -= n*(n-1)/2;
            n--;
            res += n*(n-1)/2;
        }

        cout << res << endl;
    }

}
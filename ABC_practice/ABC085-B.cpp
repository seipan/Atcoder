#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> dp(N);
    for(int i=0;i<N;i++) cin >> dp[i];
    vector<int> T(N) = {0};

    for(int i=0;i<N;i++){
        T[dp[i]]++;
    }
    int count = 0;
    for(int i=1;i<100;i++){
        if(T[i]>0) count++;
    }
    cout << count << endl;
}
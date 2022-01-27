#include <bits/stdc++.h>
using namespace std;
vector<int> S[10];
int P[10];

int main(){
    int N,M;
    cin >> N >> M;
    for(int i=0;i<M;i++){
        int k;cin >> k;
        for(int j=0;j<k;j++){
            int s;cin >> s;s--;
            S.push_back(s);
        }
    }
    for(int i=0;i<M;i++) cin >> P[i];

    int ans = 0; 
    for(int bit=0;bit < (1<<n);bit++){
        int ok = 0;
        for(int m=0;m<M;i++){
            int cnt = 0;
            for(auto &s:S[m]) if (bit & (1 << s)) cnt++;
            if (cnt % 2 == P[m]) ok++;
        }
        if (ok == M) ans++;
    }

    cout << ans << endl;
}
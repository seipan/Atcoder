#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,K; cin >> N >> K;
    vector<int> A(N);
    set<int> st;
    vector<int> v(N+1);
    for(int i=0;i<N;i++){
        int b; cin >> b;
        v[b]++;
        st.insert(b);
    }
    int n = st.size();
    int d = n - K;

    if(d<=0){
        cout << '0' << endl;
        return 0;
    }

    int ans = 0;
    int count = 0;

    sort(v.begin(),v.end());
    for(int i=0;i<=N;i++){
        ans += v[i];
        if(v[i]>0) count++;
        if(count == d) break;
    }

    cout << ans << endl;

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int H,W;cin >> H >> W;
    int N;cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for(int i=0;i<N;i++) cin >> A[i] >> B[i];

    vector<int> st;
    for(int i=0;i<N;i++) st.push_back(A[i]);
    sort(st.begin(),st.end());
    st.erase(unique(st.begin(),st.end()), st.end());
    for(int i=0;i<N;i++) A[i] = lower_bound(st.begin(),st.end(),A[i]) - st.begin();

    vector<int> tt;
    for(int i=0;i<N;i++) tt.push_back(B[i]);
    sort(tt.begin(),tt.end());
    tt.erase(unique(tt.begin(),tt.end()), tt.end());
    for(int i=0;i<N;i++) B[i] = lower_bound(tt.begin(),tt.end(),B[i]) - tt.begin();

    for(int i=0;i<N;i++){
        cout << A[i]+1 << " " << B[i]+1 << endl;
    }

}
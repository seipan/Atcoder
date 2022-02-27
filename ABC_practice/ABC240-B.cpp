#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    set<int> st;
    for(int i=0;i<N;i++){
        int c;cin >> c;
        st.insert(c);
    }
    int T = st.size();

    cout << T << endl;
}
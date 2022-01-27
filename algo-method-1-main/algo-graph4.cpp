#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main(){
    int N,M,X;cin >> N >> M >> X;
    Graph G(N);
    for(int i=0;i<M;i++){
        int A,B;
        cin >> A >> B;
        G[A].push_back(B);
		G[B].push_back(A);
    }
    set<int> st;
    for(auto v : G[X]) st.insert(v);

    set<int> result;

    for(auto a: G[X]){
        for(auto b:G[a]){
            if(b!=X && !st.count(b)){
                result.insert(b)
            }
        }
    }

    cout << result.size() <<
}
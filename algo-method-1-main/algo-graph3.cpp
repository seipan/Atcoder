#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main(){
    int N,M;cin >> N >> M;
    Graph G(N);
    for(int i=0;i<M;i++){
        int A,B;
        cin >> A >> B;
        G[A].push_back(B);
		G[B].push_back(A);
    }

    int student = -1, max_num = -1;
    for(int v=0;v<N;v++){
        int num = G[v].size();

        if(max_num < num){
            max_num = num;
            student = v;
        }
    }
    sort(G[student].begin(), G[student].end());  
     for (auto v : G[student]) {
        cout << v << " ";
    }
    cout << endl;
}
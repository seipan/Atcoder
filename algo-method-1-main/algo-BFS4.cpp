#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main(){
    int N,M;cin >> N >> M;
    Graph G(N);
    vector<int> deg(N, 0);
    for(int i=0;i<M;i++){
        int A,B;cin >> A >> B;
        G[A].push_back(B);
        ++deg[B];
    }

    queue<int> que;

    int num = 0;
    for(int v=0;v<N;v++){
        if(deg[v]==0){
            que.push(v);
            num++;
        }
    }

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(auto v2:G[v]){
            deg[v2]--;

            if(deg[v2]==0){
                que.push(v2);
                num++;
            }
        }
    }

    if(num == N) cout << "Yes" << endl;
    else cout << "No" << endl;


}
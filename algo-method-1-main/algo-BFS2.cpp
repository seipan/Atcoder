#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main(){
    int N,M;cin >> N >> M;
    Graph G(N);
    for(int i=0;i<M;i++){
        int A,B;cin >> A >> B;
        G[A].push_back(B);
        G[B].push_back(A);
    }

    vector<int> dist(N,-1);
    vector<vector<int>> nodes(N);

    dist[0]=0;
    nodes[0]={0};

    for(int k=1;k<N;k++){
        for(auto v: nodes[k-1]){
            for(auto next_v:G[v]){
                if(dist[next_v] != -1) continue;

                dist[next_v] = dist[v] + 1;
                nodes[k].push_back(next_v);
            }
        }
    }

    int ans = 0;
    for(int i=1;i<N;i++){
        ans = max(ans,dist);
    }

    cout << ans << endl;
}
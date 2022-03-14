#include <bits/stdc++.h>
using namespace std;

vector<bool> seen;
vector<int> G[2020];

void dfs(int v) {
    seen[v] = true;
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue;
        dfs(next_v);
    }
}

int main(){
    int N,M;cin >> N >> M;
    //vector<int> Graph[N];

    for(int i=0;i<M;i++){
        int a,b;cin >> a >> b;
        G[a-1].push_back(b-1);
    }

    int ans = 0;

    for(int i=0;i<N;i++){
        seen.assign(N, false);
        dfs(i);
        for(int j=0;j<N;j++) if(seen[j]) ans++;
        
    }


    cout << ans << endl;

}
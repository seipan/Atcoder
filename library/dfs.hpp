using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; 

    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; 
        dfs(G, next_v);
    }
}
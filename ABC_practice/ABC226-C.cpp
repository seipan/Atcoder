#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> time(N+1);
    vector<bool> u(N+1); // 探索済みかを表す。
    vector<int> Must[N+1];
    time[0] = 0;

    for(int i=1;i<=N;i++){
        cin >> time[i];
        int K;cin >> K;
        for(int j=0;j<K;j++){
            int d; cin >> d;
            Must[i].push_back(d);
        }
    }

    queue<int> que;

    u[N] = true;
    que.push(N);
    long long ans = time[N];

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(auto next_v : Must[v]){
            if(u[next_v] == true) continue;
            u[next_v] = true;
            que.push(next_v);
            ans+=time[next_v];
        }
    }

    cout << ans << endl;

}
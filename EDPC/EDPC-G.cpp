#include<bits/stdc++.h>
using namespace std;

vector<int> gr[110000];
vector<int> flag(110000,0);
vector<int> dp(110000);

int f(int x){
    if(flag[x]>0) return dp[x];
    flag[x] = 1;
    int ans = 0;
    for(auto &i : gr[x]){
        ans = max(ans,f(i)+1);
    }
    return dp[x] = ans;
}

int main(){
    int N,M;cin >> N >> M;

    for(int i=0;i<M;i++){
        int x,y;
        cin>>x>>y;
        gr[x].push_back(y);
    }

    int ans = 0;
    for(int i=1;i<=N;i++){
        ans = max(ans,f(i));
    }
    cout<<ans;

    return 0;
}
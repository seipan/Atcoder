#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M,u,j; cin >> N >> M;
    map<int, vector<int> > mp;
    vector<int> P;
    for(int i=0;i<M;i++){
        cin >> u;
        cin >> j;
        mp[u].push_back(j);
    }

    for(int i=0;i<N;i++){
        sort(mp[i].begin(),mp[i].end());
        for(int k=0;k<mp[i].size();k++){
            cout << mp[i][k] << " ";
        }
		cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

void rec(int v, const vector<vector<int>> &chs){
    cout << v << " ";

    for(auto ch : chs[v]){
        rec(ch,chs);
    }
}

int main(){
    int N;cin >> N;
    vector<vector<int>> chs(N);
    for(int i=1;i<N;i++){
        int p;
        cin >> p;
        chs[p].push_back(v);
    }
    rec(0, chs);
    cout << endl;
    
}
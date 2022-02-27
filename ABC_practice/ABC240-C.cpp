#include<bits/stdc++.h>
using namespace std;



int main(){
    int N,X;cin >> N >> X;
    vector<vector<int>> A(N+1,vector<int>(2));
    for(int i=0;i<N;i++){
        for(int j=0;j<2;j++){
            cin >> A[i][j];
        }
    }
    queue<int> que;

    for(int i = 0;i<N;i++){
        while(!que.empty()){
            int v = que.front();
            if(v ==0 && i == 0){
                cout << "Yes" << endl;
                return 0;
            }
            que.pop();
            int f =v - A[i][0];
            int k =v - A[i][1];
            st.insert(f);
            st.insert(k);
        }
        queue<int> que;
        for(auto x : st){
            que.push(i);
        }

    }


    cout << "No" << endl;

}
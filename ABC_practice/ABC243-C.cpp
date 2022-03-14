#include <bits/stdc++.h>
using namespace std;

#define INF 1100000000

int main(){
    int N;cin >> N;
    vector<int> X(N);
    vector<int> Y(N);
    for(int i=0;i<N;i++) cin >> X[i] >> Y[i];
    string S;
    cin >> S;
    set<int> st;
    for(int i=0;i<N;i++) st.insert(Y[i]);

    map<int,vector<int>> mp;
    for(int i=0;i<N;i++){
        mp[Y[i]].push_back(i);
    }
    //int K =mp.size();
    //cout << K << endl;

    for(auto &s:st){
        bool flagr = false;
        bool flagl = false;
       vector<int> v = mp[s];
       int t = v.size();
       int a = -1;
       int b = INF;
       for(int i=0;i<t;i++){
           //cout << v[i] << endl;
           if(S[v[i]] == 'L'){
               flagl = true;
               a = max(a,X[v[i]]);
           }
           if(S[v[i]] == 'R'){
               flagr = true;
               b = min(b,X[v[i]]);
           }

           //cout << a << " " << b << endl; 
           
        }

        if(b<a && (flagr && flagl)){
            cout << "Yes" << endl;
            return 0;
        }  
         
        

    }

    cout << "No" << endl;


}
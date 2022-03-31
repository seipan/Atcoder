#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;cin >> s >> t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end(),greater<int>());

    int N = min(s.size(),t.size());

    for(int i=0;i<N;i++){
        if(s[i] < t[i]){
            cout << "Yes" << endl;
            return 0;
        }
        else if(s[i] > t[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    if(s.size() == t.size()){
        cout << "No" << endl;
        return 0;
    }

    if(N == s.size()){
        cout << "Yes" << endl;
        return 0;
    }
    else{
        cout << "No" << endl;
        return 0;
    }
}
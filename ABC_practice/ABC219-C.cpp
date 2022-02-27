#include<bits/stdc++.h>
using namespace std;

int main(){
    string X;cin >> X;
    vector<int> pos(26);
    for(int i=0;i<26;i++){
        pos[X[i] - 'a'] = i;
    }
    int N;cin >> N;
    vector<string> S(N);
    for(int i=0;i<N;i++) cin >> S[i];

    sort(S.egin(),S.end(),[&](string s, string t){
        int len = min(s.size(),t.size());
        for(int i=0;i<len;i++){
            if(s[i] != t[i]){
                return pos[s[i] - 'a'] < pos[t[i] - 'a'];
            }
        }
        return s.size() < t.size();
    });

    for(int i=0;i<N;i++) cout << S[i] << endl;
    
}
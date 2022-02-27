#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;cin >> S;
    int K;cin >> K;
    int N = S.size();

    vector<int> v;
    for(int i=0;i<N;i++) v.push_back(i);
    set<string> res;

    do{
        string T = "";
        for(int i=0;i<N;i++){
            char vi = v[i];
            T += S[vi];
        }
        res.insert(T);
    } while (next_permutation(v.begin(), v.end()));

    auto itr = res.begin();

    for(int i=0;i<K-1;i++) itr++;

    cout << *itr << endl;

}
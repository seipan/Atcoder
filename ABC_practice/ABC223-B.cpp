#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;

    int N = S.length();
    vector<string>  v(N);

    for(int i=0;i<N;i++){
        v[i] = S.substr(i,N-1) + S.substr(0,i);
    }

    cout << *min_element(begin(v), end(v)) << endl;
    cout << *max_element(begin(v), end(v)) << endl;

}
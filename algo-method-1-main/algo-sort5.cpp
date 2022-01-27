#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];

    vector<int> B = A;
    sort(B.begin(), B.end(), greater<int>());
    B.erase(unique(B.begin(), B.end()), B.end());

    map<int, int> order;
    for (int i = 0; i < B.size(); ++i) {
        order[B[i]] = i;
    }
    
    for (auto a : A) cout << order[a] << endl;

}   
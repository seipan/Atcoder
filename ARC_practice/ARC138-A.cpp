#include <bits/stdc++.h>
using namespace std;
const int inf = INT_MAX / 2;

int main(){
    int N,K;cin >> N >> K;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];


    int sum = 0;
    int res = -1;
    for(int i=0;i<K;i++){
        sum+= A[i];
        res = max(res,A[i]);
    }
    int basyo;
    for(int i=0;i<K;i++){
        if(res == A[i]) basyo = i;
    }

    res = A[K-1];

    int place = -1;
    for(int i=K;i<N;i++){
        if(A[i] > res){
            place = i;
            break;
        }
    }

    if(place == -1){
        cout << -1 << endl;
        return 0;
    }

    cout << (place-basyo) << endl;
}
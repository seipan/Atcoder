#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;


int main(){
    int c[4][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> c[i][j];
        }
    }
    bool flag = true;
    vector<int> A(3),B(3);

    A[0] = 0;
    for(int i=0;i<3;i++) B[i] = c[0][i] - A[0];
    for(int i=0;i<3;i++) A[i] = c[0][i] - B[0];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(A[i]+B[j] != c[i][j])flag = false;
        }
    }

    if(flag)cout << "Yes" << endl;
    else cout << "No" << endl;
}
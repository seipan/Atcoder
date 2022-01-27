#include <bits/stdc++.h>
using namespace std;
const int INF = -11111000;

int main() {
	int N;
	cin >> N;
	int A[N][3];
    for(int i=0;i<N;i++) cin >> A[i][0] >> A[i][1] >> A[i][2];

    vector<vector<int>> V(N, vector<int>(3, 0));
    for (int i = 0; i < 3; ++i) V[0][i] = A[0][i];

    for(int i=1;i<N;i++){
        V[i][0] = max(V[i-1][1],V[i-1][2]) + A[i][0];
        V[i][1] = max(V[i-1][0],V[i-1][2]) + A[i][0];
        V[i][2] = max(V[i-1][0],V[i-1][1]) + A[i][0];
    }

    cout << max(V[N-1][0] ,V[N-1][1] ,V[N-1][2]) <<

}
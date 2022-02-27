#include<bits/stdc++.h>
using namespace std;

#define INF 1010000000

int main(){
    int N,M;cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    for(int i=0;i<N;i++) cin >> A[i];
    for(int i=0;i<M;i++) cin >> B[i];

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    int ans = INF;
    int x = 0;
    int y = 0;

    while ((x < N) && (y < M)) {
		ans = min(ans, abs(A[x] - B[y]));
		if (A[x] > B[y]) y++;
		else x++;
	}

    cout << ans << endl;

}
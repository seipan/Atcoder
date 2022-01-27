#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M,K;
	cin >> N >> M >> K;
	int a[110];
	int b[110];
	for(int i=0;i<N;i++) cin >> a[i];
	for(int t=0;t<M;t++) cin >> b[t]];
	int count =0;
	for(int i=0;i<N;i++){
		for(int t=0;t<M;t++){
			if(a[i]+b[t] == K) count++;
		}
	}
	cout << count << endl;
}
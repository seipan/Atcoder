#include <bits/stdc++.h>
using namespace std;

int main() {
	int X,Y,Z;
	cin >> X >> Y >> Z;
	int a[110];
	int b[110];
	int c[110];
	for(int i=0;i<X;i++) cin >> a[i];
	for(int i=0;i<Y;i++) cin >> b[i];
	for(int i=0;i<Z;i++) cin >> c[i];

	int count = 0;

	for(int i=0;i<X;i++){
		for(int j=0;i<Y;j++){
			for(int k=0;k<Z;k++){
				if(a[i]+b[j] == c[k]) count ++;
			}
		}
	}
	cout << count << endl;
}
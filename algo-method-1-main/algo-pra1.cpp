#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	int V;
    int a[110];
	cin >> N >> V ;
    for(int i=0;i<N;i++) cin >> a[i];

    int res =0;

    for(int i=0;i<N;i++){
        if(a[i]==V){
            res++;
        }
    }

    cout << res << endl;
}
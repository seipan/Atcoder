#include <bits/stdc++.h>
using namespace std;
const int INF = 11100000;

int main(){
	int N;
    cin >> N;
	int a[110];
	for(int i=0;i<N;i++) cin >> a[i];
	int v=INF;

    for(int i=0;i<N;i++){
        if(a[i]<v){
            v=a[i];
        }
    }

    cout << v << endl;

}
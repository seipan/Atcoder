#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
    int count = 0;
    cin >> N;
    for(int i=0;i<N;i++){
        if(i%2!=0 && i%5!=0 && i%3!=0){
            count++;
    }
    }

    cout << count << endl;
}
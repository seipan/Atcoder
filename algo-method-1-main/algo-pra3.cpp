#include <bits/stdc++.h>

using namespace std;



int main(){

    int N;

    int a[11];

    int b[11] = {0};

    cin >> N;

    for(int i=0;i<N;i++) cin >> a[i];



    for(int i=0;i<N;i++){

        b[a[i]-1]++;

        

    }



    for(int i=0;i<9;i++){

        cout << b[i] << endl;

    }



}
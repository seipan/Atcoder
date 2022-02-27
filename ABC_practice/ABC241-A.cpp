#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a[10];
    for(int i=0;i<9;i++) cin >> a[i];
    int b = a[0];
    int c = a[b];
    int d = a[c];

    cout << d << endl;
}
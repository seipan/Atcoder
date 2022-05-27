#include <bits/stdc++.h>
using namespace std;
const int inf = INT_MAX / 2;

int main(){
    string X;cin >> X;
    int N = X.size();

    for(int i=0;i<N;){
        if(X[i] == 'o'){
            i++;
            continue;
        }
        if(X[i] == 'k'){
            i++;
            continue;
        }
        if(X[i] == 'u'){
            i++;
            continue;
        }
        if(X[i] == 'c'){
            if(X[i+1] == 'h'){
                i += 2;
                continue;
            }
        }

        cout << "NO" << endl;
        return 0;

    }

    cout << "YES" << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long A,B;
    cin >> A >> B;
    string tmp;
    int n = max(A,B);
    tmp = to_string(n);
    int N = tmp.size();


    bool flag = false;

    for(int i =0;i<N;i++){
        if((A%10 + B%10) >= 10) {
            flag = true;
            break;
        }
        A /= 10;
        B /= 10;
    }

    if(flag) cout << "Hard" << endl;
    else cout << "Easy" << endl;
}
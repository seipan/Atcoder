#include <bits/stdc++.h>
using namespace std;


int main(){
    int A,B,C;cin >> A >> B >> C;
    if(A==B){
        cout << "=" << endl;
        return 0;
    }

    if(C%2 == 0){
        if(A<0) A*=-1;
        if(B<0) B*=-1;
        if(A==B){
            cout << "=" << endl;
            return 0;
        }
        if(A>B){
            cout << ">" << endl;
            return 0;
        }
        if(A<B){
            cout << "<" << endl;
            return 0;
        }
    }

    if(C%2!=0){
        if(A>B){
            cout << ">" << endl;
            return 0;
        }
        if(A<B){
            cout << "<" << endl;
            return 0;
        }
    }


}
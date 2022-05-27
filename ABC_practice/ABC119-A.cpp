#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){ 
    string S;cin >> S;
    int T = stoi(S.substr(0,4));

    if(T<2019){
        cout << "Heisei" << endl;
        return 0;
    }
    if(T>2019){
        cout << "TBD" << endl;
        return 0;
    }

    T = stoi(S.substr(5,2));
    if(T < 4){
        cout << "Heisei" << endl;
        return 0;
    }
    if(T > 4){
        cout << "TBD" << endl;
        return 0;
    }

    T = stoi(S.substr(8,2));

    if(T <= 30){
        cout << "Heisei" << endl;
        return 0;
    }



}
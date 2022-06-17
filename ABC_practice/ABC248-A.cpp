#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;


int main(){
    string S;cin >> S;
    map<int,int> mp;
    for(int i=0;i<S.size();i++){
        mp[S[i] - '0']++;
    }

    for(int i=0;i<10;i++){
        if(!mp[i]){
            cout << i << endl;
            return 0;
        }
    }
}
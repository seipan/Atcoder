#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    string S;cin >> S;
    int N = S.size();
    map<char,int> mp;

    bool flag = false;
    bool flag2 = false;

    for(int i=0;i<N;i++){
        mp[S[i]]++;
        char c = S[i];
        if(c >= 'a' && c <= 'z'){
            flag = true;
        }
        if(c >= 'A' && c <= 'Z'){
            flag2 = true;
        }
    }

    for(int i=0;i<N;i++){
        if(mp[S[i]]>=2) flag = false;
    }

    if(flag && flag2) cout << "Yes" << endl;
    else cout << "No" << endl;

}
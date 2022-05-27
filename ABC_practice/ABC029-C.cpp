#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()

void f(int k,string s){
    if(k ==0) cout << s << endl;
    else{
        for(char i = 'a';i<='c';i++){
            f(k-1,s+i);
        }
    }
}


int main(){
   int N;cin >> N;
   f(N,"");
}
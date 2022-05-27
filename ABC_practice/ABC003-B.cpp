#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576
using Graph = vector<vector<ll>>;

int main(){
    string S,T;cin >> S >> T;

    char A[8] = {'a' , 't' , 'c' , 'o' ,'d' , 'e', 'r','@'};
    bool flag = true;

    for(int i=0;i<T.size();i++){
        if(S[i] == '@' || T[i] == '@'){
            if(S[i] == '@'){
                bool flag2 = false;
                for(int j=0;j<8;j++){
                    if(T[i] == A[j]) flag2 = true;
                }

                if(!flag2) flag = false;
            }

            if(T[i] == '@'){
                bool flag2 = false;
                for(int j=0;j<8;j++){
                    if(S[i] == A[j]) flag2 = true;
                }

                if(!flag2) flag = false;
            }

        }
        else{
            if(S[i] != T[i]) flag = false;
        }
    }


    if(flag) cout << "You can win" << endl;
    else cout << "You will lose" << endl;


}
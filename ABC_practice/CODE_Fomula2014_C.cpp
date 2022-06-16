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
    set<string> v;

    while(1){
        string T;cin >> T;
        if (cin.fail()) break;

        for(int i=0;i<T.size();){
            if(T[i] == '@'){
                string S = "";
                ll j = i+1;
                while(j < T.size() && 0 <= (int)(T[j] - 'a') && (int)(T[j] - 'a') <= 25){
                    S += T[j];
                    j++;
                }

                if(S.size() > 0)v.insert(S);
                i = j;
            }
            else i++;

        }
    }


    for(auto &i : v){
        cout << i << endl;
    }


}
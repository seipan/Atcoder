#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()

int main(){
    vector<deque<char>> S(3);
    string A,B,C;
    cin >> A >> B >> C;

    A = '0' + A;
    B = '0' + B;
    C = '0' + C;
    char place = 'a';
    vector<ll> tis(3,0);

    while(1){
        if(tis[0] == A.size()){
            cout <<'A' << endl;
            return 0;
        }
        if(tis[1] == B.size()){
            cout << 'B' << endl;
            return 0;
        }
        if(tis[2] == C.size()){
            cout << 'C' << endl;
            return 0;
        }

        if(place == 'a'){
            place = A[tis[0]+1];
            tis[0]++;
        }
        if(place == 'b'){
            place = B[tis[1]+1];
            tis[1]++;
        }
        if(place == 'c'){
            place = C[tis[2]+1];
            tis[2]++;
        }

    }
    

}
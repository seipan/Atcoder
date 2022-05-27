#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;cin >> N;
    vector<string> S(N);
    for(int i=0;i<N;i++) cin >> S[i];

    int count = 0;

    for(int i=0;i<9;i++){
        if(S[0][i] == 'x') count++;
    }

    for(int j=0;j<9;j++){
        //int streak = 0;
        for(int i=1;i<N;i++){
            if(S[i][j] == 'x') count++;
            if(S[i][j] != 'o' && S[i-1][j] == 'o'){
                count++;
            }
            if(S[i][j] == 'o' && i==(N-1)){
                count++;
            }
        }
    }


    cout << count << endl;
}
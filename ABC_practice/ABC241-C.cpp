#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<string> S(N);
    for(int i=0;i<N;i++) cin >> S[i];

    bool flag = false;

    for(int i=0;i<N;i++){ //横
        for(int j=0;j<N;j++){
            if(S[i].at(j) == '#'){
                int count = 0;
                for(int k=0;k<6;k++){
                    if(j+k>=N) continue;
                    if(S[i].at(j+k) == '#') count++;
                }
                if(count >= 4) flag = true;
            }
        }
    }

    for(int i=0;i<N;i++){ //縦
        for(int j=0;j<N;j++){
            if(S[i].at(j) == '#'){
                int count = 0;
                for(int k=0;k<6;k++){
                    if(i+k>=N) continue;
                    if(S[i+k].at(j) == '#') count++;
                }
                if(count >= 4) flag = true;
            }
        }
    }

    for(int i=0;i<N;i++){ //migiななめ
        for(int j=0;j<N;j++){
            if(S[i].at(j) == '#'){
                int count = 0;
                for(int k=0;k<6;k++){
                    if(i+k >= N || j+k >= N){
                        int d = 6 - count;
                        if(j-d < 0 || i-d < 0) count = 0;
                        continue;
                    }
                    if(S[i+k].at(j+k) == '#') count++;
                }
                if(count >= 4) flag = true;
            }
        }
    }


     for(int i=0;i<N;i++){ //hidariななめ
        for(int j=0;j<N;j++){
            if(S[i].at(j) == '#'){
                int count = 0;
                for(int k=0;k<6;k++){
                    if(i+k >= N || j-k < 0){
                        int d = 6 - count;
                        if(j+d >= N || i - d < 0) count = 0;
                        continue;
                    }
                    if(S[i+k].at(j-k) == '#') count++;
                }
                if(count >= 4) flag = true;
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;




}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> SY,SX;
    for(int i=0;i<N;i++){
        string S;cin >> S;
        for(int j=0;j<N;j++){
            if(S[j] == '#'){
                SY.push_back(i);
                SX.push_back(j);
            } 
        }
    }
    vector<int> TY,TX;
    for(int i=0;i<N;i++){
        string T;cin >> T;
        for(int j=0;j<N;j++){
            if(T[j] == '#'){
                TY.push_back(i);
                TX.push_back(j);
            } 
        }
    }

    if(SX.size() != TX.size()){
        cout << "No" << endl;
        return 0;
    }

    int dy = *min_element(SY.begin(),SY.end());
    int dx = *min_element(SX.begin(),SX.end());

    for(int i=0;i<SY.size();i++){
        SY[i] -= dy;
        SX[i] -= dx;
    }
    set<pair<int,int>> pos_S;
    for(int i=0;i<SY.size();i++){
        pos_S.emplace(SY[i],SX[i]);
    }

    for(int t=0;t<4;t++){

        vector<int> UY,UX;
        for(int i=0;i<TX.size();i++){
            UY.push_back(N - TX[i]);
            UX.push_back(TY[i]);
        }
        TY = UY;
        TX = UX;

        int dy = *min_element(TY.begin(),TY.end());
        int dx = *min_element(TX.begin(),TX.end());
        for(int i=0;i<TY.size();i++){
            TY[i] -= dy;
            TX[i] -= dx;
        }
        set<pair<int, int>> pos_T;
        for (int i = 0; i < TY.size(); ++i) {
            pos_T.emplace(TY[i], TX[i]);
        }
        if(pos_S == pos_T){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;

}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    int a[51][51];    
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> a[i][j];
        }
    }

    bool flag = true;

    for (int i_1 = 1; i_1 < H; i_1++) {
        for(int i_2=i_1+1;i_2 <=H;i_2++){
            for (int j_1 = 1; j_1 < W; j_1++) {
                for(int j_2=j_1+1;j_2<=W;j_2++){
                    if(a[i_1][j_1] + a[i_2][j_2] > a[i_2][j_1] + a[i_1][j_2]){
                        flag = false;
                        break;
                    }
                }
            }
        } 
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
 
}
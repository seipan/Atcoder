#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;cin >> S;
    int N = S.size();

    int count = 0;
    int flag = 0;
    int t = 0;

    string ans[7] = {"Do", "Re" ,"Mi","Fa","So","La","Si"};

    for(int i=0;i<N-1;i++){
        if(S[i]==S[i+1]){
            flag++;
            if(flag == 2) break;
            count = 0;
            t = i;
        }
        count++;
    }

    string ken = S.substr(0,t+1);
    reverse(ken.begin(), ken.end());
    int n = ken.size();

    cout << ken << endl;

    cout << count << endl;

    if(count >6){
        int j = 2; 
        for(int i=0;i<n;i++){
            if(ken[i] == 'W') j--;
        }

        cout << ans[j] << endl;
        return 0;

    }

    else{
        int j = 6;
        for(int i=0;i<n;i++){
            if(ken[i] == 'W') j--;
        }
        cout << ans[j] << endl;
        return 0;
    }



}
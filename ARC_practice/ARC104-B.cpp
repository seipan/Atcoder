#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;string s;
    cin >> N >> s;

    int ans = 0;

    for(int i=0;i<N;i++){
        int count1 = 0;
        int count2 = 0;
        for(int j=i;j<N;j++){
            if(s[j] == 'C') count1++;
            if(s[j] == 'G') count1--;
            if(s[j] == 'A') count2++;
            if(s[j] == 'T') count2--;
            if(count1 == 0 && count2 == 0) ans++;
        }
        
    }

    cout << ans << endl;
}
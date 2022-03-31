#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    int N = s.size();
    string ans;

    for(int i=0;i<N;i++){
        if(s[i] == '0') ans += '0';
        if(s[i] == '1') ans += '1';
        if(s[i] == 'B'){
            int n = ans.size();
			if(n==0) continue;
            ans.erase(n-1,1);
        }
		//cout << ans << endl;
    }

    cout << ans << endl; 
}
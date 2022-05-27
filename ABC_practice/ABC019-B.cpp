#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin >> s;
    string ans = "";

    int count = 0;
    int place = 0;

    for(int i=0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            ans += s[i];
            string str = to_string(count+1);
            ans += str; 
            count = 0;
            place = i;
            continue;
        }   
        count++;
    }
    ans += s[s.size()-1];
    string str = to_string(s.size() - place);
    ans += str;


    cout << ans << endl;
}
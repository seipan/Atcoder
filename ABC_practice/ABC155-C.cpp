#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
   map<string, int> mp;
   for(int i=0;i<N;i++){
       string s;cin >> s;
       mp[s]++;
   }
   int res = -1;
   for(auto &i:mp){
       res = max(res,i.second);
   }
   for(auto &i:mp){
       if(i.second == res) cout << p.first << endl;
   }
    
}
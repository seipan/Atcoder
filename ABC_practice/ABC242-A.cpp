#include<bits/stdc++.h>

using namespace std;

int main(){
  long long n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];


  long long res1=(n*(n-1)/2); 
  sort(a.begin(),a.end());
  a.push_back(-1);
  long long cnt=1;

  for(int i=0;i<n;i++){
    if(a[i]!=a[i+1]){
      res1-=((cnt*(cnt-1))/2);
      cnt=1;
    }
    else{
        cnt++;
    }
  }



  cout << res1 << endl;
}

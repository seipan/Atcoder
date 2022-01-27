#include <bits/stdc++.h>
using namespace std;

//複数の文字列の入力と1文字目出力を同時に行える。

int main() {
	int N;
  	cin >> N; 
  	vector<string> A(N); 

  	for (int i=0; i<N; i++) {

    cin >> A[i]; // 入力を整数型動的配列として受け取る 

  	}



 	string ans = ""; // 答え 

  for (int i=0;i<N;i++) { // A の各要素の長さを足し合わせる   

    ans += A[i].at(0);   

  }



  cout << ans << endl;  

  return 0;
}
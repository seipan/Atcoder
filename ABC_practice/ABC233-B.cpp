#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L,R;
    cin >> L >> R;
    string S;
    cin >> S;
    string T,U,V;
    
    U = S.substr(L-1,R-L+1);
    V=U;

	int j = 0;
	for(int i=U.length()-1;i>=0;i--){
		V[j] = U[i];
        j++;
	}  
    int N = S.length();
    T = S.substr(0,L-1) + V + S.substr(R-1,N-R);
    cout << T << endl;
}
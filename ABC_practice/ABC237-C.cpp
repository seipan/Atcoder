#include <bits/stdc++.h>
using namespace std;

int Kaibun(string S){
    int N = S.size();
    bool flag = true;
    for(int i=0;i<N/2;i++){
        if(S[i] != S[N-i-1]) flag = false;
    }
    return flag;
}

int main(){
    string S;
    cin >> S;
	int N = S.size();
    if(Kaibun(S)){
        cout << "Yes" << endl;
        return 0;
    }
    int count = 0;
    for(int i=N-1;i>=0;i--){
        if(S[i] != 'a') break;
		count++;
    }
    int res  = 0;
    for(int i=0;i<N;i++){
        if(S[i] != 'a') break;
		res++;
    }
    res = count - res;
	string T = "";
    for(int i=1;i<=res;i++){
        T += 'a';
    }
	string U = T + S;
    if(Kaibun(U)){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl; 
}
#include <bits/stdc++.h>
using namespace std;

long long henkan(long long k,string S){
    long long ans = 0;
    long long N = S.length();

    for(int i=0;i<N;i++){
        ans *= k;
        ans +=S[i] - '0';
    }
    return ans;
}

int main(){
    long long k;
    cin >> k;
    string A,B;
    cin >> A >> B;

    cout << henkan(k,A) * henkan(k,B) << endl;

}
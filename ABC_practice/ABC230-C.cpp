#include <bits/stdc++.h>
using namespace std;



int main(){
    long long N,A,B,P,Q,R,S;cin >> N >> A >> B >> P >> Q >> R >> S;
    string str = "";
    vector<string> ans;

    for (long long i = 0; i < (S - R + 1); i++)str += '.';
	for (long long i = 0; i < (Q - P + 1); i++)ans.push_back(str);

    long long x = max(P - A, R - B);
	long long y = min(Q - A, S - B);
    for (long long i = x; i <= y; i++)ans[A + i - P][B + i - R] = '#';

    x = max(P - A, B - S);
	y = min(Q - A, B - R);
	for (long long i = x; i <= y; i++)ans[A + i - P][B - i - R] = '#';

    for (long long i = 0; i < (Q - P + 1); i++)cout << ans[i] << endl;
}
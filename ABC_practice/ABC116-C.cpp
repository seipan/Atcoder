//解説ACですよね
#include <bits/stdc++.h>
using namespace std;
const int inf = INT_MAX / 2;

int N,h[110];
int ans = 0;

void f(int x,int y){
    if(x>=y) return ;

    int res = inf;
    for(int i=x;i<y;i++) res = min(res,h[i]);

    ans += res;
    for(int i=x;i<y;i++) h[i] -= res;

    vector<int> t;
    t.push_back(-1);
    for(int i=x;i<y;i++) if(h[i] == 0) t.push_back(i);
    t.push_back(y);

    int n = t.size();
    for(int i=0;i<n-1;i++){
        f(t[i]+1,t[i+1]);
    }

}


int main(){ 
    cin >> N;
    for(int i=0;i<N;i++) cin >> h[i];

    f(0,N);
    cout << ans << endl;
}
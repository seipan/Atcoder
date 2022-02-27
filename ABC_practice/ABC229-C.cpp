#include <bits/stdc++.h>
using namespace std;
using Node = pair<int,int>;

int main(){
    int N,W;cin >> N >> W;
    vector<Node> P(N);
    for(int i=0;i<N;i++) cin >> P[i].first >> P[i].second;

    sort(P.begin(),P.end());
    reverse(P.begin(),P.end());

    int ans = 0;
    int count = 0;

    for(int i=0;i<=N;i++){
        if(count > W){
            int b = count - W;
            ans -= b*P[i-1].first;
            break;
        }
        ans += P[i].first*P[i].second;
        count += P[i].second;
    }


    cout << ans << endl;


}
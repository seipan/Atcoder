#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<ll,ll> pi;
#define ALL(a)  (a).begin(),(a).end()
#define mod 1048576
using Graph = vector<vector<ll>>;


int main(){
    ll N,M;cin >> N >> M;
    Graph G(N+1);

    for(int i=0;i<M;i++){
        ll a,b;cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<ll> v;
    for(auto &i: G[1]){
        v.push_back(i);
    }
    for(auto &i:v){
        for(auto &j:G[i]){
            if(j == N){
                cout << "POSSIBLE" << endl;
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

}
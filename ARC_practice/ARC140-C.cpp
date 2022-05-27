#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2; 
const ll infl = 1LL << 60;
typedef pair<char,ll> pi;
#define ALL(a)  (a).begin(),(a).end()


int main(){
    ll N,K;cin >> N >> K;
    string S;cin >> S;

    map<char,ll> mp;

    for(ll i=0;i<N;i++){
        mp[S[i]]++;
    }

    vector<pi> P;
    for(auto &i:mp) P.push_back(i);


    sort(ALL(P),[&](int i, int j){
        return P[i].second < P[j].second;
    });

    ll j = 0;
    for(ll i=0;i<K;){
        i+=P[j].second;
    }
}
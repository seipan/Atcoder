#include<bits/stdc++.h>
using namespace std;

int N, M;
string A[101];
int win[101];

void janken(int round, int userA, int userB){
    char a = A[userA][round];
    char b = A[userB][round];

    if(a == b) return -1;

    if (a == 'G' && b == 'C') return userA;
    if (a == 'C' && b == 'P') return userA;
    if (a == 'P' && b == 'G') return userA;

    return userB;
}


int main(){
    int N,M;cin >> N >> M;
    for(int i=0;i<2*N;i++) cin >> A[i];
    vector<int> order;
    for(int i=0;i<2*N;i++) order.push_back(i);

    for(int i=0;i<M;i++){
        for(int i=0;i<N;i++){
            int res = janken(round,order[i*2],order[i*2+1]);
            if(0 <= res) win[res]++;
        }
        sort(order.begin(),order.end(),[&](int a, int b){
            if(win[a] != win[b]) return win[a] > win[b];
            else return a < b;
        });
    }

    for(int i=0;i<2*N;i++) cout << order[i] + 1 << endl;


}
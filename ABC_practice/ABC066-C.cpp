#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = INT_MAX / 2;
typedef pair<ll,ll> pi;


int main(){
    int n;cin >> n;
    deque<int> deq;

    for(int i=0;i<n;i++){
        int a;cin >> a;
        if(i%2 == 0){
            deq.push_back(a);
        }
        else{
            deq.push_front(a);
        }
    }

    if((n-1)%2==0){
        for(int i=0;i<n;i++){
            cout << deq.back();
            deq.pop_back();
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout << deq.front();
            deq.pop_front();
        }
    }

}
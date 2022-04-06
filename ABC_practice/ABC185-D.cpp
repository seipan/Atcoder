#include <bits/stdc++.h>
using namespace std;
#define INF 2000000000



int main(){
    int N,M;cin >> N >> M;
    vector<int> A(M);
    for(int i=0;i<M;i++) cin >> A[i];
    
    if(M==0){
        cout << 1 << endl;
        return 0;
    }
    
    sort(A.begin(),A.end());
    int res = INF;

    if(A[0]-1>0){
        res = A[0] - 1;
    }
    //cout << res << endl;

    for(int i=0;i<M-1;i++){
        //cout << A[i+1] - A[i] << endl;
        if((A[i+1] - A[i]) != 0 && (A[i+1] - A[i]) != 1){
            res = min(res, (A[i+1] - A[i]-1));
        }
        //cout << res << endl;
    }

    if(N-A[M-1]>0){
        res = min(res,N-A[M-1]);
    }

    if(res == 0){
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    
    if(A[0]-1>0){
        int k = A[0] - 1;

        if(k%res==0) ans += k/res;
        else ans += ((k/res)+1);
    }

    for(int i=0;i<M-1;i++){
        int k = A[i+1] - A[i];
        if(k!=0) k--;
        if(k>0){
            if(k%res==0) ans += k/res;
            else ans += ((k/res)+1);
        }
    }

    if(N-A[M-1]>0){
        int k = N-A[M-1];

        if(k%res==0) ans += k/res;
        else ans += ((k/res)+1);

    }

    cout << ans << endl;





    
}
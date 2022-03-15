#include<bits/stdc++.h>
using namespace std;

#define INF 1010000000

int main(){
    int N;cin >> N;
    vector<int> X(N);
    vector<int> Y(N);
    for(int i=0;i<N;i++) cin >> X[i] >> Y[i];

    int place = 0;
    vector<bool> used(N,false);
    used[0] = true;
    double ans = 0.0;



    for(int i=0;i<N-1;i++){
        int next_place = -1;
        double res = INF;
        for(int j=0;j<N;j++){
            if(used[j]) continue;
            double d = sqrt((X[j]-X[place])*(X[j]-X[place])+(Y[j]-Y[place])*(Y[j]-Y[place])); //距離計算
            if(res > d){
                res = d;
                next_place = j;
            }
        }
        place = next_place;
        used[place] = true;
        ans += res;
    }

    ans += sqrt((X[0]-X[place])*(X[0]-X[place])+(Y[0]-Y[place])*(Y[0]-Y[place]));

    cout << fixed << setprecision(8) << ans << endl;

    
}
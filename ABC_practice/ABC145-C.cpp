#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    int X[10],Y[10];
    for(int i=0;i<n;i++) cin >> X[i] >> Y[i];
    vector<int> v;
    for(int i=0;i<n;i++) v.push_back(i);
    int count = 0;
    long double res = 0;
    long double ans = 0;

    do{
        for(int i=0;i<n-1;i++){
            int t=v[i];
            int w=v[i+1];
            res += sqrt((X[t]-X[w])*(X[t]-X[w]) + (Y[t]-Y[w])*(Y[t]-Y[w]));
        }
        count++;
    } while (next_permutation(v.begin(), v.end()));

    double ti = res/count;
    cout << fixed << setprecision(10) << ti << endl;

}
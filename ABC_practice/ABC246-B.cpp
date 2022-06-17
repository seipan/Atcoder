#include <bits/stdc++.h>
using namespace std;

int main(){
    long double a,b; cin >> a >> b; 
    long double x;
    long double res = 1/(1+(b/a)*(b/a));

    if(a == 0){
        cout << '0' << " " << '1' << endl;
        return 0;
    }
    if(b==0){
        cout << '1' << " " << '0' << endl;
        return 0;
    }

    x = sqrt(res);
    long double y = x*(b/a);

    cout << fixed << setprecision(15);

    cout << x << " " << y << endl;
}
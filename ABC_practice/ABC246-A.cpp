#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    int a = x1 - x2;
    if(a == 0) a = abs(x2 - x3);

    int b;

    if(y1 == y2) b = y3;
    else if(y3 == y1) b = y2;
    else if(y3 == y2) b = y1;

    if(x1 == x2) a = x3;
    else if(x3 == x1) a = x2;
    else if(x3 == x2) a = x1;

    cout << a << " " << b << endl;

}
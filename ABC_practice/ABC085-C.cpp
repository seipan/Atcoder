#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,Y;
    cin >> N >> Y;

    int res10000 = -1, res5000 = -1, res1000 = -1;

    for(int a=0;a<-N;a++){
        for(int b=0;a+b<=N;b++){
            int c = N-a-b;
            if(10000*a + 5000*b + 1000*c == Y){
                res10000 = a;
                res5000 = b;
                res1000 = c;
            }
        }
    }

    cout << res10000 << " " << res5000 << " " << res1000 << endl;
}
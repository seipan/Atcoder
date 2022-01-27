#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        if(i%3==0 && i%5==0){
            cout << "FizzBuzz" << endl;
        }
        else if(i%3==0){
            cout << "Fizz" << endl;
        }
        else if(i%5==0){
            cout << "Buzz" << endl;
        }
        else if(i%3!=0 && i%5!=0) {
            cout << i << endl;
        }
    }

}
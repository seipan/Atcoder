#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];

    vector<int> T(N,0);
    for(auto a:A) T[a]++;

    vector<int> num(N);
    for (int i = 0; i < N; ++i) num[i] = i;

    auto cmp = [&](int x, int y) -> bool {
        return nums[x] > nums[y];
    };
    stable_sort(num.begin(), num.end(), cmp);

     for (int i : students) {
        cout << i << " " << nums[i] << endl;
    }
}
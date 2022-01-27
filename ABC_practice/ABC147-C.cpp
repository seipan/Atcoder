#include <bits/stdc++.h>
using namespace std;
using pint = pair<int,int>;

int N;
vector<vector<pint>> v;

bool judge(int bit) {
    for (int i = 0; i < N; ++i) {
        if ( !(bit & (1 << i)) ) continue; //i人目が不親切なら終了
        // i人目の証言をそれぞれ確認
        for (pint xy : v[i]) {
            int x = xy.first; // x が
            int y = xy.second; // y = 1: 正直、y = 0: 不親切

            // y = 1 なのに「不親切」だったらダメ
            if (y == 1 && !(bit & (1 << x))) return false;

            if (y == 0 && (bit & (1 << x))) return false;
        }
    }
    return true;
}

int main(){
    cin >> N;
    v.resize(N);
    for (int i = 0; i < N; ++i) {
        int A; cin >> A;
        v[i].resize(A);
        for (int j = 0; j < A; ++j) {
            cin >> v[i][j].first >> v[i][j].second;
            --v[i][j].first; // 0-indexed に
        }
    }
     int res = 0;
    for (int bit = 0; bit < (1 << N); ++bit) {
        
        // 矛盾 check
        if (judge(bit)) {
            
            // bit に含まれる人数を数える
            int count = 0;
            for (int i = 0; i < N; ++i) {
                if (bit & (1 << i)) ++count;
            }
            res = max(res, count);
        }
    }

    cout << res << endl;
}

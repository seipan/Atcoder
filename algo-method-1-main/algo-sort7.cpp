#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    long long math;
    long long eng;
};

int main(){
    int N;cin >> N;
    vector<Student> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i].name >> S[i].math >> S[i].eng;
    }

    auto cmp = [&](Student x, Student y) -> bool {
        if(x.math!=y.math) return x.math > y.math;
        return x.math+x.eng < y.math+y.eng;
    };
    stable_sort(S.begin(), S.end(), cmp);

    for (Student s : S) {
        cout << s.name << " " << s.math << " " << s.eng << endl;
    }

}
#include <bits/stdc++.h>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;

#define all(x) (x).begin(), (x).end()

constexpr double PI = 3.14159265358979;
constexpr auto INF = 1e+9;
constexpr auto INFL = 1LL << 60;
constexpr auto MOD = 1000000007;

ll ceil(ll a, ll b) { if (a % b == 0) return a / b; return (a / b) + 1; }
template <class T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return 1; } return 0; }
template <class T> bool chmin(T& a, const T& b) { if (b < a) { a = b; return 1; } return 0; }

// ======================================== //

int main() {
    string S;
    cin >> S;

    string T = "chokudai";
    int l = S.size();
    vector<vector<ll>> dp(9, vector<ll>(l + 1, 0));

    dp[0].assign(l + 1, 1);
    for (int j = 1; j < l + 1; j++) {
        for (int i = 1; i < 9; i++) {
            dp[i][j] = dp[i][j - 1];
            if (S[j - 1] == T[i - 1]) dp[i][j] += dp[i - 1][j - 1];
            dp[i][j] %= MOD;
        }
    }

    cout << dp[8][l] << endl;
}
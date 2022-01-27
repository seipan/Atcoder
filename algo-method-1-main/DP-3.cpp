#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// 入力
int N, W;
int w[110], v[110];

// DPテーブル
int dp[110][10010];

int main() {
  cin >> N >> W;
  for (int i = 0; i < N; ++i) cin >> w[i] >> v[i];

  // DP初期条件: dp[0][j] = 0
  for (int j = 0; j <= W; ++j) dp[0][j] = 0;

  // DPループ
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j <= W; ++j) {
      if (j >= w[i]) dp[i+1][j] = max(dp[i][j-w[i]] + v[i], dp[i][j]); // dp[i][j](i個まで足した時のj以下での最大の価値)とdp[i][j-w[i]](i個選んだときで、jからWi文だけ引いた数以下での価値の最大値にi個目の価値を足したもの最大値です)
      else dp[i+1][j] = dp[i][j];
    }
  }

  cout << dp[N][W] << endl;
}
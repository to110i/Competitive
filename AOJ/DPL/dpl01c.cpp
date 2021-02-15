#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int N, W;
    int v[200], w[200];
    int dp[200][10200];
    cin >> N >> W;
    for (int i = 0; i < N; i++) {
        cin >> v[i] >> w[i];
    }
    for (int i = 0; i <= W; i++) {
        dp[0][i] = 0;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= W; j++) {
            if (j >= w[i]) {
                dp[i + 1][j] =
                    max(dp[i][j - w[i]] + v[i], dp[i + 1][j - w[i]] + v[i]);
                dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
            } else {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}
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
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    lli ans = 0;
    if (A + B > (2 * C)) {
        ans += C * 2 * (min(X, Y));
        int temp = X;
        X -= min(X, Y);
        Y -= min(temp, Y);
    }
    if (X == 0) {
        if (B > 2 * C) {
            ans += 2 * C * Y;
            Y = 0;
        }
    }
    if (Y == 0) {
        if (A > 2 * C) {
            ans += 2 * C * X;
            X = 0;
        }
    }
    ans += (A * X + B * Y);
    cout << ans << endl;
    return 0;
}
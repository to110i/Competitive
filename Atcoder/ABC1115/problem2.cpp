#include <algorithm>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef long long int lli;

int main() {
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    double ans;
    ans = (gx - sx) * (sy / (sy + gy)) + sx;
    cout << std::fixed << std::setprecision(15) << ans << endl;
    return 0;
}
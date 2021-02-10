#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    lli H, W;
    cin >> H >> W;
    lli ans;
    if (H == 1 || W == 1) {
        ans = 1;
    } else {
        ans = (H * W + 1) / 2;
    }
    cout << ans << endl;
    return 0;
}

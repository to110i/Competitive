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
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) continue;
        int tmp_count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) tmp_count++;
        }
        if (tmp_count == 8) ans++;
    }
    cout << ans << endl;
    return 0;
}
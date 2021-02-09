#include <algorithm>
#include <bitset>
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
    int N, M;
    cin >> N >> M;
    int k[20];
    int s[20][20];
    int p[20];

    for (int i = 0; i < M; i++) {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < M; i++) {
        cin >> p[i];
    }
    lli ans = 0;
    for (int bit = 0; bit < (1 << N); bit++) {
        cout << bit << endl;
        lli sum = 0;
        for (int i = 0; i < M; i++) {
            lli temp = 0;
            for (int j = 0; j < k[i]; j++) {
                if (bit & (1 << (s[i][j] - 1))) temp++;
            }
            if (temp % 2 != p[i]) {
                break;
            } else {
                sum++;
            }
        }
        if (sum == M) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
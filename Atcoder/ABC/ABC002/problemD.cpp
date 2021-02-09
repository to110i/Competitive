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
    int x[100];
    int y[100];
    for (int i = 0; i < M; i++) {
        cin >> x[i] >> y[i];
    }
    lli max = 0;
    for (int bit = 0; bit < (1 << N); bit++) {
        int people = 0;
        lli sum = 0;
        for (int i = 0; i < M; i++) {
            bool flag_x = ((1 << (x[i] - 1)) & bit) != 0;
            bool flag_y = ((1 << (y[i] - 1)) & bit) != 0;
            if (flag_x && flag_y) {
                people = people | (1 << (x[i] - 1)) | (1 << (y[i] - 1));
            }
        }
        sum = bitset<16>(people).count();

        if (sum > max) {
            max = sum;
        }
        cout << sum << endl;
        cout << bitset<16>(people) << endl;
    }
    cout << max << endl;
    return 0;
}
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;
typedef long long int lli;

int main() {
    int N, K;
    cin >> N >> K;
    int pos_1;
    int count = 0;
    for (int i = 1; i <= N; i++) {
        int temp;
        cin >> temp;
        if (temp == 1) {
            pos_1 = i;
            break;
        }
    }
    if (N == K) {
        count = 1;
    } else {
        if (pos_1 != 1) count += ((pos_1 - 1) + (K - 2)) / (K - 1);
        if (pos_1 != N) count += ((N - pos_1) + (K - 2) / (K - 1);
    }
    cout << count << endl;

    return 0;
}

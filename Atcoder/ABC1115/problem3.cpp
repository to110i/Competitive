#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

void foreach_permutation(int n, std::function<void(int *)> f) {
    int indexes[n];
    for (int i = 0; i < n; i++) indexes[i] = i;
    do {
        f(indexes);
    } while (std::next_permutation(indexes, indexes + n));
}

int main() {
    int N, K;
    cin >> N >> K;
    int T[10][10] = {0};
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> T[i][j];
        }
    }
    if (N == 2) {
        int sum = T[0][1] + T[1][0];
        if (sum == K) count++;
    } else {
        int array[] = {1, 2, 3, 4, 5, 6, 7};
        do {
            int sum = 0;
            sum += T[0][array[0]];
            for (int i = 1; i < N - 1; i++) {
                sum += T[array[i - 1]][array[i]];
            }
            sum += T[array[N - 2]][0];
            if (sum == K) count++;
        } while (next_permutation(array, array + N - 1));
    }
    cout << count;
    return 0;
}

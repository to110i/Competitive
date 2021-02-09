#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
typedef long long int lli;

int main() {
    int N, M, X;
    int A[100] = {0};
    int min_0 = 0;
    int min_N = 0;
    cin >> N >> M >> X;
    for (int i = 0; i < M; i++) {
        int temp;
        cin >> temp;
        A[temp] = 1;
    }
    for (int i = 0; i < X; i++) {
        min_0 += A[i];
    }
    for (int i = X; i < N; i++) {
        min_N += A[i];
    }

    cout << min(min_0, min_N) << endl;
    return 0;
}
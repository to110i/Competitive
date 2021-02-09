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
    int N, M;
    lli A[200][200];
    lli ans = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < M - 1; i++) {
        for (int j = i + 1; j < M; j++) {
            lli temp_ans = 0;
            for (int k = 0; k < N; k++) {
                if (A[k][i] < A[k][j]) {
                    temp_ans += A[k][j];
                } else {
                    temp_ans += A[k][i];
                }
            }
            if (temp_ans > ans) ans = temp_ans;
        }
    }
    cout << ans << endl;
    return 0;
}
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    lli N, M, K;
    vector<lli> A, B;
    vector<lli> AA, BB;
    cin >> N >> M >> K;
    A.push_back(0);
    B.push_back(0);
    for (int i = 1; i <= N; i++) {
        lli temp;
        cin >> temp;
        temp += A[i - 1];
        A.push_back(temp);
    }
    for (int i = 1; i <= M; i++) {
        lli temp;
        cin >> temp;
        temp += B[i - 1];
        B.push_back(temp);
    }

    lli max = 0;
    for (int i = N; i >= 0; i--) {
        if (A[i] > K) continue;
        for (int j = M; j >= 0; j--) {
            lli t;
            t = A[i] + B[j];
            if (t <= K) {
                if (max < i + j) {
                    max = i + j;
                    break;
                }
            }
        }
    }
    cout << max << endl;

    return 0;
}
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int N, M;
    cin >> N >> M;
    int a[50];
    int b[50];
    int c[50];
    int d[50];
    int ans[50];
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> c[i] >> d[i];
    }
    for (int i = 0; i < N; i++) {
        int min;
        for (int j = 0; j < M; j++) {
            if (j == 0) {
                ans[i] = 1;
                min = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            } else {
                int temp = abs(a[i] - c[j]) + abs(b[i] - d[j]);
                if (temp < min) {
                    min = temp;
                    ans[i] = j + 1;
                }
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
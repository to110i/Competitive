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
    cin >> N >> M;
    int s[5];
    int c[5];
    int ans[5];
    bool flag = true;
    for (int i = 0; i < N; i++) {
        cin >> s[i] >> c[i];
        ans[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        if (c[i] == 0 && s[i] == N) {
            flag = false;
            break;
        }
        if (ans[s[i] - 1] == 0 || ans[s[i] - 1] == c[i]) {
            ans[s[i] - 1] = c[i];
        } else {
            flag = false;
            break;
        }
    }
    int answer = 0;
    if (flag) {
        for (int i = 0; i < N; i++) {
            answer += ans[i] * (pow(10, N - 1 - i));
        }
        cout << answer << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
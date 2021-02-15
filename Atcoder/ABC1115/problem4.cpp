#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    lli N, W;
    cin >> N >> W;
    lli water[300000] = {0};
    for (int i = 0; i < N; i++) {
        lli S, T, P;
        cin >> S >> T >> P;
        water[S] += P;
        water[T] -= P;
    }
    bool flag = true;
    lli sum = 0;
    for (int i = 0; i <= 200000; i++) {
        sum += water[i];
        if (sum > W) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

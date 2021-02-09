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
    lli N;
    lli T;
    lli sum = 0;
    cin >> N >> T;
    lli old_time;
    for (int i = 1; i <= N; i++) {
        if (i == 1) cin >> old_time;
        if (i == N) {
            sum += T;
        } else {
            lli temp;
            cin >> temp;
            lli sub = temp - old_time;
            if (sub < T) {
                sum += sub;
            } else {
                sum += T;
            }
            old_time = temp;
        }
    }
    cout << sum << endl;
    return 0;
}

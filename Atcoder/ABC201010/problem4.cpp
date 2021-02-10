#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

lli get_(lli N, lli A, lli B) {
    lli ans = 0;
    for (lli i = 0; i < N - A + 1; i++) {
        if (N - i < B) {
            for (lli j = i; j < N - B;) }
        if (i > B) {
            ans += i - B + 1;
        }
        for (lli j = 0; j < N - A + 1; j++) {
            if (N - j < B) }
    }
    return ans;
}

int main() {
    lli T;
    lli N, A, B;
    lli ans;
    for (lli i = 0; i < T; i++) {
        cin >> N >> A >> B;
        lli ans = get_(N, A, B);
        cout << ans % 1000000007 << endl;
    }

    return 0;
}

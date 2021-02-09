#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
typedef long long int lli;

lli get_(lli hp) {
    if (hp == 1) {
        return 1;
    } else {
        return (1 + 2 * get_(hp / 2));
    }
}

int main() {
    lli H;
    cin >> H;
    H = get_(H);
    cout << H << endl;
    return 0;
}

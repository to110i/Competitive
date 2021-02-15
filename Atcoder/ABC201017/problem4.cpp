#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

long double logbase(long double a, long double base) {
    return log(a) / log(base);
}

int main() {
    lli X, Y, A, B;
    cin >> X >> Y >> A >> B;
    lli exp = 0;
    if ((X + B) >= Y && (X * A) >= Y) {
    } else if ((X + B) >= Y) {
        exp += logbase((long double)(1 + (long double)(B / X)), A);
    } else if ((X * A) >= Y) {
        exp += (Y - X - 1) / B;
    } else {
        exp += logbase((long double)(1 + (long double)(B / X)), A);
        X *= pow(A, exp);
        exp += (Y - X - 1) / B;
    }
    cout << exp;
    return 0;
}

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int A, B;
    cin >> A >> B;
    int inc = 2 * A + 100;
    int ans = inc - B;
    cout << ans << endl;
    return 0;
}
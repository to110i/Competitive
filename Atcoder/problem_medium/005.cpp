#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    lli N;
    lli ans;
    cin >> N;
    ans = ((N - 1) * N) / 2;
    cout << ans << endl;
    return 0;
}
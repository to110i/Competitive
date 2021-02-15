#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;
#define rep(i, x) for (int i = 0; i < x; i++)
#define SORT(x) sort(x.begin(), x.end())

int main() {
    lli N, A, B;
    cin >> N >> A >> B;
    lli min = A * (N - 1) + B;
    lli max = B * (N - 1) + A;
    lli sum = max - min + 1;
    if (sum < 0) sum = 0;
    cout << sum << endl;
    return 0;
}

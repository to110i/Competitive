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
    int N;
    cin >> N;
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (int(log10(float(i))) % 2 == 0) count++;
    }
    cout << count << endl;
    return 0;
}
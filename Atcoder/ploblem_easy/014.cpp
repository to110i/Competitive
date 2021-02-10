#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    lli N, K;
    cin >> N >> K;
    lli last = N;
    while (true) {
        lli temp = abs(last - K);
        if (temp >= last) {
            cout << last << endl;
            break;
        }
        last = temp;
    }
    return 0;
}

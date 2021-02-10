#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    lli N;
    cin >> N;
    lli moto = N;

    int ans;
    int keta[18];
    int sum = 0;
    int temp_1 = 0;
    int temp_2 = 0;
    for (int i = 0; i < 18; i++) {
        keta[i] = (N % 10) % 3;
        N /= 10;
        sum += keta[i];
        if (keta[i] == 1) temp_1++;
        if (keta[i] == 2) temp_2++;
    }
    sum = sum % 3;
    if (sum == 0) {
        ans = 0;
    } else if (sum == 1) {
        if (temp_1 > 0 && (moto > 9)) {
            ans = 1;
        } else if (temp_2 > 1 && (moto > 99)) {
            ans = 2;
        } else {
            ans = -1;
        }
    } else if (sum == 2) {
        if (temp_2 > 0 && (moto > 9)) {
            ans = 1;
        } else if (temp_1 > 1 && (moto > 99)) {
            ans = 2;
        } else {
            ans = -1;
        }
    }
    cout << ans << endl;
    return 0;
}

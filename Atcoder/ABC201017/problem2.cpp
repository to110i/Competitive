#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int N;
    lli man = 0;
    long double euc = 0;
    lli max = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        lli temp;
        cin >> temp;
        temp = abs(temp);
        man += temp;
        euc += (long double)(temp * temp);
        if (max < temp) max = temp;
    }
    euc = sqrt(euc);
    cout << man << endl;
    cout << std::fixed << std::setprecision(15) << euc << endl;
    cout << max << endl;
    return 0;
}
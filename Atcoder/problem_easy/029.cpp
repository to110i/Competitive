#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
typedef long long int lli;

int main() {
    string S;
    cin >> S;
    int min = 999;
    for (int i = 0; (i < S.length() - 2); i++) {
        int a = S[i] - '0';
        int b = S[i + 1] - '0';
        int c = S[i + 2] - '0';
        int temp = 100 * a + 10 * b + c;
        temp = abs(temp - 753);
        if (min > temp) {
            min = temp;
        }
    }
    cout << min << endl;

    return 0;
}

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
    lli count = 0;
    lli live = 0;
    lli n = S.size();
    for (lli i = n - 1; i >= 0; i--) {
        if (S[i] == 'B') {
            count += live;
        } else {
            live++;
        }
    }
    cout << count << endl;
    return 0;
}

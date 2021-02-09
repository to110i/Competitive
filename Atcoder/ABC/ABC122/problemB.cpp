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
    string S;
    cin >> S;
    int max = 0;
    int tmp = 0;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'A' || S[i] == 'T' || S[i] == 'G' || S[i] == 'C') {
            tmp++;
            if (tmp > max) {
                max = tmp;
            }
        } else {
            tmp = 0;
        }
    }
    cout << max << endl;
    return 0;
}
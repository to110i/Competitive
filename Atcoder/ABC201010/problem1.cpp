#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    char S;
    char T;
    cin >> T;
    cin >> S;
    if (T == 'Y') {
        S -= ('a' - 'A');
    }
    cout << S << endl;
    return 0;
}
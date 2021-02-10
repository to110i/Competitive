#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    bool flag = false;
    for (int i = 1; i <= B; i++) {
        if ((i * (A % B)) % B == C) {
            flag = true;
        }
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
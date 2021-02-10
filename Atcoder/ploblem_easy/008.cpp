#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int a, b;
    cin >> a >> b;
    int con;
    bool res = false;
    if (b < 10) {
        con = 10 * a + b;
    } else if (b < 100) {
        con = 100 * a + b;
    } else {
        con = 1000 * a + b;
    }
    for (int i = 1; i < 1000; i++) {
        if (i * i == con) res = true;
    }
    if (res) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

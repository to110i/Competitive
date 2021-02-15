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
    int X;
    cin >> X;
    int next;
    for (int i = X;; i++) {
        bool flag = true;
        if (i == 2) {
            next = 2;
            break;
        }
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            next = i;
            break;
        }
    }
    cout << next << endl;
    return 0;
}

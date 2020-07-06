#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int a;
    cin >> a;
    int temp = a % 1000;
    if (temp != 0) temp = 1000 - temp;
    cout << temp << endl;
    return 0;
}
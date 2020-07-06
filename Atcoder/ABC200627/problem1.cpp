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
    int temp;
    temp = a + a * a + a * a * a;
    cout << temp << endl;
    return 0;
}
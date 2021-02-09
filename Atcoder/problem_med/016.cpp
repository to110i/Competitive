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
    int N;
    cin >> N;
    int sum = 0;
    int min = 101;
    vector<int> s;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        s.push_back(temp);
        sum += temp;
        if ((temp % 10 != 0) && min > temp) min = temp;
    }
    if (min == 101) {
        cout << 0 << endl;
    } else if (sum % 10 == 0) {
        cout << sum - min;
    } else {
        cout << sum << endl;
    }
    return 0;
}

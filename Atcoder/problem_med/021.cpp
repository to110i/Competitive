#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;
typedef long long int lli;

int main() {
    lli N;
    cin >> N;
    lli sum = 0;
    vector<lli> b;
    map<lli, lli> a;

    for (lli i = 0; i < N; i++) {
        lli temp;
        cin >> temp;
        b.push_back(temp);
        if (a.count(temp) == 0) {
            a[temp] = 1;
        } else {
            a[temp]++;
        }
    }
    // for (lli i = 0; i < N; i++) {
    //     if (a.count(i) == 0) {
    //         continue;
    //     } else {
    //         sum += (a[i] * (a[i] - 1)) / 2;
    //     }
    // }
    for (auto p : a) {
        sum += p.second * (p.second - 1) / 2;
    }
    for (lli i = 0; i < N; i++) {
        lli temp_sum;
        temp_sum = sum - (a[b[i]] * (a[b[i]] - 1)) / 2;
        temp_sum += ((a[b[i]] - 1) * (a[b[i] - 2)) / 2;
        cout << temp_sum << endl;
    }
    return 0;
}

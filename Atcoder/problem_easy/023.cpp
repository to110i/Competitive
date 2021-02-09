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
    int A, B, M;
    cin >> A >> B >> M;
    int min_a;
    int min_b;
    int min_c;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < A; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
        if (i == 0) {
            min_a = temp;
        } else {
            if (min_a > temp) min_a = temp;
        }
    }
    for (int i = 0; i < B; i++) {
        int temp;
        cin >> temp;
        b.push_back(temp);
        if (i == 0) {
            min_b = temp;
        } else {
            if (min_b > temp) min_b = temp;
        }
    }
    for (int i = 0; i < M; i++) {
        int x, y, c;
        cin >> x >> y >> c;
        int sum = a[x - 1] + b[y - 1] - c;
        if (i == 0) {
            min_c = sum;
        } else {
            if (min_c > sum) min_c = sum;
        }
    }
    cout << min((min_a + min_b), min_c) << endl;
    return 0;
}

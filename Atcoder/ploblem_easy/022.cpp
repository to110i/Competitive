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
    int N;
    lli x;
    vector<lli> a;
    int smile = 0;
    cin >> N >> x;
    for (int i = 0; i < N; i++) {
        lli temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < N; i++) {
        if (i == (N - 1)) {
            if (x != a[i]) {
                break;
            }
        }
        x -= a[i];
        if (x < 0) {
            break;
        }
        smile++;
    }
    cout << smile << endl;
    return 0;
}

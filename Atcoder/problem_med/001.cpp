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
    vector<int> a;
    vector<bool> b;
    int count = 0;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
        b.push_back(false);
    }
    int next = 0;
    b[0] = true;
    while (true) {
        next = a[next] - 1;
        if (b[next]) {
            count = -1;
            break;
        } else {
            count++;
            if (next == 1) {
                break;
            }
            b[next] = true;
        }
    }
    cout << count << endl;
    return 0;
}

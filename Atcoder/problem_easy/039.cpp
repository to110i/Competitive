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
    int N;
    cin >> N;
    int A[200001] = {0};
    int max_1 = 0;
    int max_2 = 0;
    for (int i = 1; i <= N; i++) {
        int temp;
        cin >> temp;
        A[i] = temp;
        if (max_1 < temp) {
            max_2 = max_1;
            max_1 = temp;
        } else if (max_2 < temp) {
            max_2 = temp;
        }
    }
    for (int i = 1; i <= N; i++) {
        if (A[i] == max_1) {
            cout << max_2 << endl;
        } else {
            cout << max_1 << endl;
        }
    }
    return 0;
}

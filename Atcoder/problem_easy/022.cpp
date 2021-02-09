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
    int D, sum;
    cin >> N;
    cin >> D >> sum;
    sum += N;
    D--;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        sum += D / temp;
    }
    cout << sum << endl;
    return 0;
}

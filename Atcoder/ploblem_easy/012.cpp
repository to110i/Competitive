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
    lli K, N;
    cin >> K >> N;
    int dis = 0;
    int max = 0;
    int first;
    int last;
    cin >> first;
    last = first;
    for (int i = 0; i < N; i++) {
        int temp;
        int temp_dis;
        cin >> temp;
        if (i == N - 1) {
            temp_dis = K + first - temp;
        } else {
            temp_dis = temp - last;
        }
        dis += temp_dis;
        if (max < temp_dis) max = temp_dis;
        last = temp;
    }
    dis -= max;
    cout << dis << endl;
    return 0;
}

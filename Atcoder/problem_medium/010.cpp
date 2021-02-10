#include <algorithm>
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
    int max = 0;
    int map[100001] = {0};
    cin >> N;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        if (temp == 0) {
            map[0]++;
            map[1]++;
        } else {
            map[temp - 1]++;
            map[temp]++;
            map[temp + 1]++;
        }
    }
    for (int i = 0; i < 100000; i++) {
        if (map[i] > max) max = map[i];
    }
    cout << max << endl;
    return 0;
}
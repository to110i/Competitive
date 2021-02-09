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
    int color[8] = {0};
    int over = 0;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        int rank = temp / 400;
        if (rank >= 8) over++;
        if (color[rank] == 0) color[rank] = 1;
    }
    int min = 0;
    for (int i = 0; i < 8; i++) {
        min += color[i];
    }
    if (min == 0) {
        min = 1;
        over--;
    }
    int max = min + over;
    cout << min << " " << max << endl;
    return 0;
}

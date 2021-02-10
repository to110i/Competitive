#include <algorithm>
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
    int x, y, t;
    int x_old = 0;
    int y_old = 0;
    int t_old = 0;
    bool flag = true;
    for (int i = 0; i < N; i++) {
        cin >> t >> x >> y;
        int dis_x = abs(x - x_old);
        int dis_y = abs(y - y_old);
        int dis = dis_x + dis_y;
        int dis_t = t - t_old;
        if (dis > dis_t) {
            flag = false;
            break;
        } else if ((abs(dis - dis_t) % 2) == 1) {
            flag = false;
            break;
        } else {
            x_old = x;
            y_old = y;
            t_old = t;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

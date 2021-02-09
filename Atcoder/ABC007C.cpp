#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    char c[52][52];
    int R, C;
    int sy, sx;
    int gy, gx;
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;
    int dist[52][52];
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            dist[i][j] = 1000000007;
            cin >> c[i][j];
        }
    }
    queue<pair<int, int>> Q;
    Q.push(make_pair(sx, sy));
    dist[sy][sx] = 0;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    while (!Q.empty()) {
        int cx = Q.front().first;
        int cy = Q.front().second;
        Q.pop();
        for (int i = 0; i < 4; i++) {
            int ex = cx + dx[i];
            int ey = cy + dy[i];
            if (c[ey][ex] != '.' || dist[ey][ex] != 1000000007) continue;
            dist[ey][ex] = dist[cy][cx] + 1;
            if (ey == gy && ex == gx) break;
            Q.push(make_pair(ex, ey));
        }
    }
    cout << dist[gy][gx] << endl;
    return 0;
}
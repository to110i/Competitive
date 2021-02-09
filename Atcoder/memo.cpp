#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int H, W;
    char c[1009][1009];
    int dist[1009][1009];

    cin >> H >> W;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> c[i][j];
        }
    }
    for (int i = 1; i < H; i++) {
        for (int j = 1; j < W; j++) {
            dist[i][j] = 1000000007;
        }
    }
    queue<pair<int, int>> Q;
    Q.push(make_pair(0, 0));
    dist[0][0] = 0;
    while (!Q.empty()) {
        int cx = Q.front().first;
        int cy = Q.front().second;
        Q.pop();

        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++) {
            int ex = cx + dx[i];
            int ey = cx + dy[i];
            if (c[ex][ey] != '.' || dist[ex][ey] != 1000000007) continue;
            Q.push(make_pair(ex, ey));
            dist[ex][ey] = dist[cx][cy] + 1;
        }
    }
}
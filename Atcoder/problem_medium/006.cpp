#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    char map[52][52];
    char out[50][50];
    int H, W;
    cin >> H >> W;
    for (int i = 0; i < W + 2; i++) {
        map[0][i] = '.';
    }
    for (int i = 0; i < H; i++) {
        map[i + 1][0] = '.';
        for (int j = 0; j < W; j++) {
            char temp;
            cin >> temp;
            map[i + 1][j + 1] = temp;
        }
        map[i + 1][W + 1] = '.';
    }
    for (int i = 0; i < W + 2; i++) {
        map[H + 1][i] = '.';
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (map[i + 1][j + 1] == '#') {
                out[i][j] = '#';
                continue;
            }
            int count = 0;
            for (int x = 0; x < 3; x++) {
                for (int y = 0; y < 3; y++) {
                    if ((x == 1) && (y == 1)) continue;
                    if (map[i + y][j + x] == '#') count++;
                }
            }
            out[i][j] = count + '0';
        }
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << out[i][j];
        }
        cout << endl;
    }
    return 0;
}
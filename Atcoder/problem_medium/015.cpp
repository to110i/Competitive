#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int H, W;
    cin >> H >> W;
    char board[100][100];
    bool flag = true;
    for (int i = 0; i < W + 2; i++) {
        board[0][i] = '.';
        board[H + 1][i] = '.';
    }
    for (int i = 1; i <= H; i++) {
        board[i][0] = '.';
        for (int j = 1; j <= W; j++) {
            cin >> board[i][j];
        }
        board[i][W + 1] = 0;
    }
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (board[i][j] == '#') {
                bool up = (board[i - 1][j] == '.');
                bool down = (board[i + 1][j] == '.');
                bool right = (board[i][j + 1] == '.');
                bool left = (board[i][j - 1] == '.');

                if (up && down && right && left) {
                    flag = false;
                    break;
                }
            }
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

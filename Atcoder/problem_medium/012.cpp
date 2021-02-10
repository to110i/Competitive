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
    int H, W;
    cin >> H >> W;
    char board[100][100];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < H; i++) {
        bool flag = false;
        if (board[i][0] == '.') {
            for (int j = 0; j < W; j++) {
                if (board[i][j] == '.') {
                    if (j == (W - 1)) flag = true;
                } else {
                    break
                }
            }
            if(flag)
        }
    }

    return 0;
}
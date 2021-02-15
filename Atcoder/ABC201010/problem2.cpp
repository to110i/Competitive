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
    string S[100];
    cin >> H >> W;
    int count = 0;
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                if (i != 0) {
                    if (S[i - 1][j] == '.') count++;
                }
                if (j != 0) {
                    if (S[i][j - 1] == '.') count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
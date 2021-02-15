#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int A[3][3];
    bool bingo[3][3];
    bool res = false;
    for (int i = 0; i < 3; i++) {
        cin >> A[i][0] >> A[i][1] >> A[i][2];
        bingo[i][0] = false;
        bingo[i][1] = false;
        bingo[i][2] = false;
    }
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (temp == A[i][j]) {
                    bingo[i][j] = true;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        if (bingo[i][0] && bingo[i][1] && bingo[i][2]) res = true;
    }
    for (int i = 0; i < 3; i++) {
        if (bingo[0][i] && bingo[1][i] && bingo[2][i]) res = true;
    }
    if (bingo[1][1] &&
        ((bingo[0][0] && bingo[2][2]) || (bingo[0][2] && bingo[2][0]))) {
        res = true;
    }
    if (res) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

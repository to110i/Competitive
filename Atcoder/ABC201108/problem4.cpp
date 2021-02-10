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
    lli A[200001];  //各動作の移動量
    lli B[200001];  //各回の合計値
    lli C[200001];  //終了時の位置
    lli D[200001];  //その回の最大移動量
    A[0] = 0;
    B[0] = 0;
    C[0] = 0;
    D[0] = 0;
    lli max = 0;
    lli temp = 0;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        B[i] = B[i - 1] + A[i];
        C[i] = C[i - 1] + B[i];
        if (D[i - 1] < B[i]) {
            D[i] = B[i];
        } else {
            D[i] = D[i - 1];
        }
    }
    for (int i = 1; i <= N; i++) {
        temp = C[i - 1] + D[i];
        if (temp > max) {
            max = temp;
        }
    }
    cout << max << endl;
    return 0;
}

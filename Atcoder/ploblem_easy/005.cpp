#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int N, M, C;
    cin >> N >> M >> C;
    vector<int> B;
    vector<vector<int>> A;
    int ans = 0;
    for (int i = 0; i < M; i++) {
        int temp;
        cin >> temp;
        B.push_back(temp);
    }
    for (int i = 0; i < N; i++) {
        vector<int> temp_vec;
        for (int j = 0; j < M; j++) {
            int temp;
            cin >> temp;
            temp_vec.push_back(temp);
        }
        A.push_back(temp_vec);
    }
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++) {
            sum += (A[i][j] * B[j]);
        }
        if (sum + C > 0) ans++;
    }
    cout << ans << endl;
    return 0;
}

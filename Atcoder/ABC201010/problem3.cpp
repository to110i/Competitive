#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int N;
    int p[200001] = {0};
    int min = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        p[temp]++;
        if (temp == min) {
            for (int j = min + 1; j < N + 1; j++) {
                if (p[j] == 0) {
                    min = j;
                    break;
                }
            }
        }
        cout << min << endl;
    }

    return 0;
}

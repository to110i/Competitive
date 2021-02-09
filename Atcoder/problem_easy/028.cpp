#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
typedef long long int lli;

int main() {
    int N;
    vector<int> A;
    int count = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        A.push_back(temp);
    }
    while (true) {
        bool flag = true;
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 == 0) {
                A[i] /= 2;
            } else {
                flag = false;
                break;
            }
        }
        if (flag) {
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;
    return 0;
}

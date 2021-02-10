#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int N;
    cin >> N;
    vector<int> X;
    lli min = 0;
    for (int i = 0; i < N; i++) {
        lli temp;
        cin >> temp;
        X.push_back(temp);
        min += temp * temp;
    }
    for (int i = 1; i < 101; i++) {
        lli temp_sum = 0;
        for (int j = 0; j < N; j++) {
            temp_sum += ((X[j] - i) * (X[j] - i));
        }
        if (min > temp_sum) {
            min = temp_sum;
        }
    }
    cout << min << endl;
    return 0;
}

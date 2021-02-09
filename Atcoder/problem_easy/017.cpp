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
    cin >> N;
    vector<double> v;
    double sum = 0;
    for (int i = 0; i < N; i++) {
        double temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), greater<double>());
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            sum += (v[i]) / pow(2, i);
        } else {
            sum += (v[i] / pow(2, (i + 1)));
        }
    }
    cout << sum << endl;
    return 0;
}
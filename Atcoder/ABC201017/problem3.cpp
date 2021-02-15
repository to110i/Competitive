#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    lli N;
    cin >> N;
    vector<long long> ret;
    for (long long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            ret.push_back(i);
            if (i * i != N) ret.push_back(N / i);
        }
    }
    sort(ret.begin(), ret.end());  // 昇順に並べる
    for (size_t i = 0; i < ret.size(); i++) {
        cout << ret[i] << endl;
    }
    return 0;
}

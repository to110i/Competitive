#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;
#define rep(i, x) for (int i = 0; i < x; i++)
#define SORT(x) sort(x.begin(), x.end())

int main() {
    lli N, X;
    cin >> N >> X;
    vector<lli> A, B;
    int count_a = 0;
    int count_b = 0;
    rep(i, N) {
        int temp;
        cin >> temp;
        if (temp < X) {
            A.push_back(X - temp);
            count_a++;
        } else {
            B.push_back(temp - X);
            count_b++;
        }
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 1; i < count_a; i++) {
    }
    return 0;
}

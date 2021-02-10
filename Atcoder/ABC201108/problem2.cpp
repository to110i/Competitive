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
    int A[1000];
    cin >> N;
    int gcd;
    int max = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 2; i <= 1000; i++) {
        int temp = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] % i == 0) {
                temp++;
            }
        }
        if (temp > max) {
            max = temp;
            gcd = i;
        }
    }
    cout << gcd << endl;
    return 0;
}
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    string S, T;
    cin >> S;
    cin >> T;
    int L;
    L = S.length();
    int c = 0;
    for (int i = 0; i < L; i++) {
        if (S[i] != T[i]) c++;
    }
    cout << c << endl;
    return 0;
}
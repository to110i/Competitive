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
    string S;
    int max = 0;
    cin >> S;
    for (int i = 0; i < (int)(S.length()); i++) {
        int temp = 0;
        for (int j = i; j < (int)S.length(); j++) {
            if (S[j] == 'A' || S[j] == 'G' || S[j] == 'T' || S[j] == 'C') {
                temp++;
            } else {
                i = j;
                break;
            }
        }
        if (temp > max) {
            max = temp;
        }
    }
    cout << max << endl;
    return 0;
}
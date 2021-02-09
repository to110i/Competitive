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
    cin >> S;
    int count = 26;
    int bl[26] = {0};
    for (int i = 0; i < S.length(); i++) {
        if ((bl[S[i] - 'a']) == 0) {
            bl[S[i] - 'a'] = 1;
            count--;
        }
        if (count == 0) {
            break;
        }
    }
    if (count == 0) {
        cout << "None" << endl;
    } else {
        for (int i = 0; i < 26; i++) {
            if (bl[i] == 0) {
                cout << char('a' + i) << endl;
                break;
            }
        }
    }

    return 0;
}
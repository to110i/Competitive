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
    string S;
    cin >> S;
    string key = "keyence";
    bool flag = false;
    int N = S.length();
    if (S[0] == 'k') {
        string temp = S.substr(0, 7);
        if (temp == key) flag = true;
    }
    if (S[N - 1] == 'e') {
        string temp = S.substr(N - 7, 7);
        if (temp == key) flag = true;
    }
    if ((S[0] == 'k') && (S[N - 1] == 'e')) {
        int i = 0;
        while (i != 7) {
            if (S[i] == key[i]) {
                i++;
            } else {
                break;
            }
        }
        int j = 0;
        while (j != 7 - i) {
            if (S[N - 1 - j] == key[6 - j]) {
                j++;
            } else {
                break;
            }
        }

        if (i + j == 7) flag = true;
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

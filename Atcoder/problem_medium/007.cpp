#include <algorithm>
#include <cstdio>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int max = 0;
    for (int i = 1; i < N; i++) {
        int count = 0;
        string temp1 = S.substr(0, i);
        string temp2 = S.substr(i, N - i);
        for (char c = 'a'; c <= 'z'; c++) {
            bool right = false;
            bool left = false;
            for (int j = 0; j < i; j++) {
                if (temp1[j] == c) left = true;
            }
            for (int j = 0; j < (N - i); j++) {
                if (temp2[j] == c) right = true;
            }
            if (right && left) count++;
        }
        if (max < count) max = count;
    }
    cout << max << endl;
    return 0;
}
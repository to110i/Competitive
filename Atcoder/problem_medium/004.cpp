#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    string S;
    cin >> S;
    string tempS;
    int ans;
    if (S.length() % 2 == 0) {
        tempS = S.substr(0, S.length() - 2);
    } else {
        tempS = S.substr(0, S.length() - 1);
    }
    while (true) {
        int strnum = tempS.length();
        string temp1 = tempS.substr(0, strnum / 2);
        string temp2 = tempS.substr(strnum / 2, strnum / 2);
        if (temp1 == temp2) {
            ans = strnum;
            break;
        }
        tempS = tempS.substr(0, strnum - 2);
    }
    cout << ans << endl;
    return 0;
}
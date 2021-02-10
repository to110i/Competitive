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
    int N, M;
    cin >> N >> M;
    int s[4] = {10, 10, 10, 10};
    bool flag = true;
    for (int i = 0; i < 3; i++) {
        int temp_s, temp_c;
        cin >> temp_s >> temp_c;
        if (s[temp_s] == 10 || s[temp_s] == temp_c) {
            s[temp_s] = temp_c;
        } else {
            flag = false;
        }
    }
    if(s[])
    if (flag) {
    } else {
        cout << -1 << endl;
    }
    return 0;
}

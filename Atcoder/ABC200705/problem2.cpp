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
    cin >> N;
    map<string, int> test;
    test["AC"] = 0;
    test["WA"] = 0;
    test["TLE"] = 0;
    test["RE"] = 0;
    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        test[temp]++;
    }
    cout << "AC x " << test["AC"] << endl;
    cout << "WA x " << test["WA"] << endl;
    cout << "TLE x " << test["TLE"] << endl;
    cout << "RE x " << test["RE"] << endl;
    return 0;
}
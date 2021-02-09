#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;
typedef long long int lli;

int main() {
    int N;
    cin >> N;
    set<int> s;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        if (s.count(temp) == 0) {
            s.insert(temp);
        } else {
            s.erase(temp);
        }
    }
    cout << s.size() << endl;
    return 0;
}

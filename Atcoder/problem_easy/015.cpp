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
    int N;
    vector<int> d;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        d.push_back(temp);
    }
    sort(d.begin(), d.end());
    int mid;
    mid = d.size() / 2;
    int ans = d[mid] - d[mid - 1];
    cout << ans << endl;
    return 0;
}
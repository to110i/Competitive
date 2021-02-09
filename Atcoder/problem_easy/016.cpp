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
    cin >> N;
    int *a;
    a = new int[N];
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        a[temp - 1] = i + 1;
    }
    for (int i = 0; i < N; i++) {
        cout << a[i];
        if (i != N - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
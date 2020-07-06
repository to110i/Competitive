#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    lli N, Q;
    map<lli, lli> val;
    vector<lli> A, B, C;
    cin >> N;
    for (lli i = 0; i < N; i++) {
        lli a;
        cin >> a;
        A.push_back(a);
        val[a] = 0;
    }
    cin >> Q;
    for (lli i = 0; i < N; i++) {
        val[A[i]]++;
    }
    for (lli i = 0; i < Q; i++) {
        lli b, c;
        cin >> b;
        cin >> c;
        B.push_back(b);
        C.push_back(c);
    }
    lli S = 0;
    for (lli i = 0; i < Q; i++) {
        if (i == 0) {
            val[C[i]] += val[B[i]];
            val[B[i]] = 0;
            for (auto itr = val.begin(); itr != val.end(); ++itr) {
                S += (itr->first) * (itr->second);
            }
        } else {
            lli dif;
            dif = (C[i] - B[i]) * val[B[i]];
            S += dif;
            val[C[i]] += val[B[i]];
            val[B[i]] = 0;
        }

        cout << S << endl;
    }
    return 0;
}
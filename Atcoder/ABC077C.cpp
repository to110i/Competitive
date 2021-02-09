#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

// int main() {
//     lli N;
//     vector<lli> A;
//     vector<lli> B;
//     vector<lli> C;
//     cin >> N;
//     for (lli i = 0; i < N; i++) {
//         lli temp;
//         cin >> temp;
//         A.push_back(temp);
//     }
//     for (lli i = 0; i < N; i++) {
//         lli temp;
//         cin >> temp;
//         B.push_back(temp);
//     }
//     for (lli i = 0; i < N; i++) {
//         lli temp;
//         cin >> temp;
//         C.push_back(temp);
//     }
//     sort(A.begin(), A.end());
//     sort(C.begin(), C.end());
//     lli count = 0;
//     for (lli x : B) {
//         count += (lower_bound(A.begin(), A.end(), x) - A.begin()) *
//                  (N - (upper_bound(C.begin(), C.end(), x) - C.begin()));
//     }
//     cout << count << endl;

//     return 0;
// }
int main() {
    lli N;
    lli A[1000000];
    lli B[1000000];
    lli C[1000000];
    cin >> N;
    for (lli i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (lli i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (lli i = 0; i < N; i++) {
        cin >> C[i];
    }
    sort(A, A + N);
    sort(C, C + N);
    lli count = 0;
    for (lli i = 0; i < N; i++) {
        lli mid = B[i];
        if (A[0] >= mid || C[N - 1] <= mid) continue;
        lli num_a = lower_bound(A, A + N, mid) - A;
        lli num_c = (C + N) - upper_bound(C, C + N, mid);
        count += 1LL * (num_a * num_c);
    }
    cout << count << endl;

    return 0;
}

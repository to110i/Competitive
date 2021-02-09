#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
typedef long long int lli;

int main()
{
    lli N, K;
    cin >> N >> K;
    N = N % K;
    if (N > (K - N))
    {
        N = K - N;
    }
    cout << N << endl;

    return 0;
}
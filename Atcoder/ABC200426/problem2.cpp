#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
typedef long long int lli;

int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (((C - 1) / B) < ((A + (D - 1)) / D))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
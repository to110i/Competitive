#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
typedef long long int lli;

int main()
{
    int S, W;
    cin >> S >> W;
    if (S > W)
    {
        cout << "safe" << endl;
    }
    else
    {
        cout << "unsafe" << endl;
    }
    return 0;
}
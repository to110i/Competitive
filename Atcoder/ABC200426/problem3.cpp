#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
#include <set>
using namespace std;
typedef long long int lli;

int main()
{
    int N;
    cin >> N;
    set<string> S;
    for (int i = 0; i < N; i++)
    {
        string sn;
        cin >> sn;
        S.insert(sn);
    }
    cout << S.size() << endl;
    return 0;
}
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
typedef long long int lli;

lli gcd(lli a, lli b){
    if(a < b){
        lli temp = a;
        a = b;
        b = temp;
    }
    while (b != 0) {
        a %= b;
        if (a == 0) return b;
        b %= a;
    }
    return a;
}

lli lcm(lli a, lli b){
    return (a * b) / gcd(a, b);
}

int main()
{   
    lli A, B, C, D;
    lli answer;
    cin >> A >> B >> C >> D;
    lli lc;
    lc = lcm(C, D);
    answer = (B - A + 1);
    answer -= (B / C - ((A + (C - 1)) / C) + 1);
    answer -= (B / D - ((A + (D - 1)) / D) + 1);
    answer += (B / lc - ((A + (lc - 1)) / lc) + 1);
    cout << answer << endl;
    return 0;
}


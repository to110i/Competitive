#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main()
{
    int A, B;
    int num = 0;
    int hole = 1;
    cin >> A >> B;
    for(;;){
        if (hole >= B){
            break;
        }
        num ++;
        hole = (hole-1) + A;
    }
    cout << num << endl;
    return 0;
}
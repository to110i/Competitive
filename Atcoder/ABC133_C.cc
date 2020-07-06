#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
typedef long long int lli;

int main()
{   
    lli L, R;
    cin >> L >> R;
    if(R - L > 2018){
        cout << 0 << endl;
    } else {
        int min = 2018;
        for(int i = L; i < R; i++){
            for(int j = i + 1; j <= R; j++){
                if(min > (((i % 2019) * (j % 2019)) % 2019)){
                    min = ((i % 2019) * (j % 2019)) % 2019;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}
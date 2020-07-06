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
    int X[10][10];
    int count = 0;
    int N, D;
    int sum;
    cin >> N >> D;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < D; j++){
            cin >> X[i][j];
        }
    }
    for(int i = 0; i< N - 1; i++){
        for(int j = i + 1; j < N; j++){
            sum = 0;
            for(int k = 0; k < D; k++){
                sum += (X[i][k] - X[j][k]) * (X[i][k] - X[j][k]) ;
            }
            if(floor(sqrt(sum)) == ceil(sqrt(sum))){
                count ++;
            }
        }
    }
    cout << count << endl;
    return 0;
}

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int lli;

int main() {
    int H, W, K, sum;
    int ans = 0;
    cin >> H >> W >> K;
    vector<bool> board;
    for(int i = 0; i < H; i ++){
        for(int j = 0; j < W; j++){
            char temp;
            cin >> temp;
            if(temp == '.'){
                board.push_back(false);
            } else {
                board.push_back(true);
                sum ++;
            }
        }
    }
    if(sum < K){
        ans = 0;
    } else {
        if(sum == K) ans ++;
        
    }

    return 0;
}

//黒いマスは増えない。
//一次配列で扱ったほうが楽そう？
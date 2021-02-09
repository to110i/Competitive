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
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<bool>> board(H, vector<char>(W));

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            char temp;
            cin >> temp;
            if (temp == '#')
            {
                board[i][j] = true;
            }
            else
            {
                board[i][j] = false;
            }s
        }
    }

    for (int maskR = 0; maskR < (1 << H); maskR++)
    {
        for (int maskC = 0; maskC < (1 << W); maskC++)
        {
            int black = 0;
                for(int i = 0; i < H; i++){
                    for(int j = 0; j < W; j++){
                        if(((maskR >> i) & 1) == 0) && 
                    }
                }
        }
    }
    return 0;
}
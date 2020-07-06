#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
typedef long long int lli;

struct work
{
    lli time;
    lli deadline;

    bool operator<(const work &another) const
    { //演算子のオーバーロード
        if (deadline == another.deadline)
        {
            return time < another.time; //かかる時間
        }
        return deadline < another.deadline; // 締切
    }
};

int main()
{   
    vector<work> works;
    lli N;
    int i;
    bool tf = true;
    cin >> N;
    lli sum = 0;
    for (i = 0; i < N; i++)
    {
        work wo;
        cin >> wo.time >> wo.deadline;
        works.push_back(wo);
    }
    sort(works.begin(), works.end());
    for (i = 0; i < N; i++)
    {
        sum += works[i].time;
        cout << sum << "  " << works[i].deadline << endl;
        if(works[i].deadline < sum){
            tf = false;
            break;
        }
    }
    if(tf){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

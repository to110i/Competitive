#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

struct restraunt
{
    string name;
    int id;
    int point;

    bool operator<(const restraunt &another) const
    { //演算子のオーバーロード
        if (name == another.name && point != another.point)
        {
            return another.point < point; //点数順順
        }
        return name < another.name; // 辞書順
    }
};

int main()
{
    vector<restraunt> restraunts;
    int N;
    int i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        restraunt rest;
        cin >> rest.name >> rest.point;
        rest.id = i + 1;
        restraunts.push_back(rest);
    }
    sort(restraunts.begin(), restraunts.end());
    for (i = 0; i < N; i++)
    {
        cout << restraunts[i].id << endl;
    }
    return 0;
}
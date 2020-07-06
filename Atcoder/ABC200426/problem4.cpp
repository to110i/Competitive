
// #include <iostream>
// #include <algorithm>
// #include <cstdio>
// #include <vector>
// #include <string>
// #include <set>
// using namespace std;
// typedef long long int lli;

// int main()
// {
//     string S;
//     cin >> S;
//     int num = 0;
//     int init = S.length();
//     int temp_int;
//     if (init < 4)
//     {
//     }
//     else
//     {

//         string temp_str = substr
//             temp =
//                 for (int i = init; i > 0; i--)
//     }
// }
// return 0;
// }

#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <map>
#include <set>
#include <tuple>
#include <vector>
using namespace std;
typedef long long ll;

int main()
{
    string S;
    cin >> S;
    ll length = S.length();
    vector<ll> mod_map(2019, 0);
    ll cur_num = 0;
    ll base_10 = 1;
    for (ll i = 0; i < length; i++)
    {
        cur_num += (S[length - 1 - i] - '0') * base_10;
        mod_map[cur_num % 2019] += 1;
        base_10 = base_10 * 10 % 2019;
    }
    ll ans = mod_map[0];
    for (auto m : mod_map)
    {
        if (m > 1)
            ans += m * (m - 1) / 2;
    }
    cout << ans << endl;
    return 0;
}
//     _    _____ _____ _    _   _      _    ____ ___ _
//    / \  |  ___|  ___/ \  | \ | |    / \  |  _ \_ _| ||
//   / _ \ | |_  | |_ / _ \ |  \| |   / _ \ | | | | || ||
//  / ___ \|  _| |  _/ ___ \| |\  |  / ___ \| |_| | || |___
// /_/   \_\_|   |_|/_/   \_\_| \_| /_/   \_\____/___|_____|

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define endl '\n'
#define assault_rifle            \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

void solver()
{
    vector<string> arr(8);
    for (int i = 0; i < 8; i++)
        cin >> arr[i];
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 6; j++)
            if (arr[i][j] == '#' and arr[i][j + 1] == '.' and arr[i][j + 2] == '#')
            {
                cout << i + 2 << ' ' << j + 2 << endl;
                return;
            }
}

int main()
{
    assault_rifle;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solver();
    }
    return 0;
}

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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool ev = (arr[0] & 1), od = (arr[1] & 1);
    for (int i = 2; i < n; i++)
        if (!(i & 1) and (arr[i] & 1) != ev)
        {
            NO;
            return;
        }
        else if ((i & 1) and (arr[i] & 1) != od)
        {
            NO;
            return;
        }
    YES;
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

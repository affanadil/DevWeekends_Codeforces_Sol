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
    vector<vector<string>> arr(3, vector<string>(n));
    map<string, int> cnt;
    vector<int> ans(3, 0);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            cnt[arr[i][j]]++;
        }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < n; j++)
        {
            if (cnt[arr[i][j]] == 1)
                ans[i] += 3;
            else if (cnt[arr[i][j]] == 2)
                ans[i]++;
        }
    for (int i = 0; i < 3; i++)
        cout << ans[i] << ' ';
    cout << endl;
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

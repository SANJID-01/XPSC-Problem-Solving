#define sonic                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define io_files                      \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout); // *required
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pub(x, y) (x).push_back(y)
#define ppb(x) (x).pop_back()
#define ff first
#define ss second
#define nl '\n'
#define sz(x) (int)x.size()
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define Minus cout << -1 << '\n'
#define all(x) (x).begin(), (x).end()
#define Unique(x) (x).erase(unique(all(x)), (x).end()) // *required sorted

int main()
{
    sonic;

    vector<vector<int>> v(3, vector<int>(3));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int cnt = v[i][j];

            if (i > 0)
                cnt += v[i - 1][j];
            if (i < 2)
                cnt += v[i + 1][j];
            if (j > 0)
                cnt += v[i][j - 1];
            if (j < 2)
                cnt += v[i][j + 1];

            cout << (cnt % 2 == 0 ? 1 : 0);
        }
        cout << nl;
    }

    return 0;
}

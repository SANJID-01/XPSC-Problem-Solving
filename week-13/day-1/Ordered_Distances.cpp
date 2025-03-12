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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        int P = v2[0];

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (v1[i] == P)
            {
                cnt = i + 1;
                break;
            }
        }

        vector<pair<int, int>> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back({abs(v1[j] - P), v1[j]});
        }
        sort(all(v));

        vector<int> x;

        for (auto [p, q] : v)
        {
            x.push_back(q);
        }
        if (x == v2)
        {
            cout << cnt << nl;
        }
        else
        {
            Minus;
        }
    }

    return 0;
}

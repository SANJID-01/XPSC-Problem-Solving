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
        int a, b;
        cin >> a >> b;
        string x, y;
        cin >> x >> y;

        int mn = INT_MAX;

        if (a == b)
        {
            int cnt = 0;
            for (int i = 0; i < a; i++)
            {
                if (x[i] != y[i])
                    cnt++;
            }
            cout << cnt << nl;
        }
        else
        {
            for (int i = 0; i <= (a - b); i++)
            {
                string s = x.substr(i, b);
                int cn = 0;
                for (int j = 0; j < b; j++)
                {
                    if (s[j] != y[j])
                        cn++;
                }
                mn = min(mn, cn);
            }
            cout << mn << nl;
        }
    }

    return 0;
}
